<?php
$query = "SELECT * FROM wp_cf_form_entry_values WHERE (slug='ppgfis_docente_nome' OR
slug='ppgfis_docente_imagem' OR
slug='ppgfis_docente_categoria' OR
slug='ppgfis_docente_email' OR
slug='ppgfis_docente_lattes' OR
slug='ppgfis_docente_predio' OR
slug='ppgfis_docente_sala' OR
slug='ppgfis_docente_ramal' OR
slug='ppgfis_docente_bio' OR
slug='ppgfis_docente_informacoes' OR
slug='ppgfis_docente_nacionalidade') ORDER BY id";

global $wpdb;
$results = $wpdb->get_results($query, OBJECT);
foreach($results as $result) {
  $entry_id = $result->entry_id;
  $slug = $result->slug;
  $entries[$entry_id][$slug] = $result->value;
}

print_r("
<table class='table' style='margin-top: 20px'>
  <thead>
    <tr>
      <th> </th>
      <th>Nome</th>
      <th>Email</th>
      <th>Telefone</th>
      <th>Prédio</th>
      <th>Sala</th>
    </tr>
  </thead>

  <tbody>");

foreach ($entries as $index=>$entry) {
  print_r("<tr>");

  if(!empty($entry["ppgfis_docente_imagem"])){
    $imagem = $entry["ppgfis_docente_imagem"];
  }
  else {
    $imagem = "https://www.if.ufrgs.br/if/wp-content/uploads/2018/04/default-profile.png";
  }

  if(!empty($entry["ppgfis_docente_lattes"])){
    $lattes = $entry["ppgfis_docente_lattes"];
  }
  else {
    $lattes = "";
  }

  if(!empty($entry["ppgfis_docente_categoria"])){
    $categoria = $entry["ppgfis_docente_categoria"];
  }
  else {
    $categoria = "";
  }

  if(!empty($entry["ppgfis_docente_informacoes"])){
    $info = $entry["ppgfis_docente_informacoes"];
  }
  else {
    $info = "";
  }

  if(!empty($entry["ppgfis_docente_bio"])){
    $bio = $entry["ppgfis_docente_bio"];
  }
  else {
    $bio = "";
  }


  if(!empty($entry["ppgfis_docente_nacionalidade"])){
    $nacionalidade = strtolower($entry["ppgfis_docente_nacionalidade"]);
    print_r("<td><img src='https://www.if.ufrgs.br/if/wp-content/uploads/2018/04/blank.gif' class='flag flag-$nacionalidade'/></td>");
  }

  if(!empty($entry["ppgfis_docente_nome"])){
    $nome = $entry["ppgfis_docente_nome"];
    $anchor = '#'.$index;
    print_r("<td style='vertical-align:middle'><a name='$index' style='cursor:pointer'> $nome</a></td>");
  }

  if(!empty($entry["ppgfis_docente_email"])){
    $email = $entry["ppgfis_docente_email"];
    print_r("<td> <a href='mailto:$email'> $email </a> </td>");
  }

  if(!empty($entry["ppgfis_docente_ramal"])){
    $ramal = $entry["ppgfis_docente_ramal"];
    print_r("<td> $ramal </td>");
  }

  if(!empty($entry["ppgfis_docente_predio"])){
    $predio = $entry["ppgfis_docente_predio"];
    print_r("<td> $predio </td>");
  }

  if(!empty($entry["ppgfis_docente_sala"])){
    $sala = $entry["ppgfis_docente_sala"];
    print_r("<td> $sala </td>");
  }
  print("</tr>");
  print_r("<tr><td colspan='6'>
  <marquee>
  <div class='ppgfis_docente_displaybox' id='$index' style='display: none; width: 100%; min-height:300px; max-height: 100%; border: 1px solid gray;
         border-radius: 5px; padding: 10px; border-left: 8px solid #248cc8'; margin-bottom: 20px;>
          <div style='width: 135px; float: left;'>
            <img class='ppgfis_docente_image' src='$imagem' style='max-height: 130px; max-width: 130px;   border-radius: 8px;'><img>
          </div>
          <div style='margin-left: 150px;'>
            <h2 class='ppgfis_docente_nome blue' style='margin-top: -2px'> $nome </h2>
            <p class='ppgfis_docente_categoria' style='margin-top: -38px'> <strong>Professor $categoria </strong> </p>
            <p class='ppgfis_docente_email' style='margin-top: -10px'><strong>Email: </strong> <a href='mailto:$email'>$email</a></p>
            <p class='ppgfis_docente_ramal' style='margin-top: -18px'><strong>Telefone: </strong> $ramal</p>
            <p class='ppgfis_docente_predio' style='margin-top: -18px'><strong>Prédio:</strong> $predio - <strong>Sala:</strong> $sala</p>

          </div>
          <div width='100%' style='padding-left: 4px'>
          <hr/>
          <p class='ppgfis_docente_lattes'><strong class='blue'> Lattes </strong><a href='$lattes'> $lattes</a> </p>
          <p class='blue'><strong>Atividades</strong></p>
          <p class='ppgfis_docente_bio' style='margin-top: -20px;text-indent: 30px;'>$bio </p>
          <p class='blue'><strong>Outras informações</strong></p>
          <p class='ppgfis_docente_informacoes' style='text-align: justify; text-justify: inter-word; text-indent: 30px; margin-top: -20px'>$info</p>
          <div>
       </div>
	     </marquee>
  </td></tr>");

}


print("</tbody></table>");

print_r("<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js'></script>");
print_r("
<script>
jQuery(document).ready(function() {
 $('a').click(function(){
   var nome = $(this).attr('name');
   $('#'+nome).toggle();
   window.scroll(0,document.querySelector(this.href).offsetTop - 5);
 });

 $('span').click(function(){
   var nome = $(this).attr('name');
   $('#'+nome).fadeOut(1000);
 });

});
</script>
");

?>