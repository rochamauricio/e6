# estrutura da página

~~~ html

<!DOCTYPE html>	<!--indica que versão=html5 -->
<html>
<head>
    <title>Título</title>
   
   <!-- Tags Meta: Utilizadas dentro do head serve para passar instruções para programas externos.  -->
   <meta charset="UTF-8"/>
   <meta name="description" content="Descrição da minha página">
   <meta name="keywords" content="palavraChave1, palavraChave2, palavraChave3">
   <meta name="author" content="Maurício Rocha">
   <meta http-equiv="refresh" content="30">  <!--Atualiza a cada 30 s -->
  </head>
<body>
</body>
</html>

~~~

# anotações
> O HTML é padronizado pela W3C.<br/> 
>
> http://www.w3schools.com/


# comentários
~~~html
<!-- comentários -->
~~~

# Favicon: Ícone favorito
~~~html
<link rel="shortcut icon"  href="img/man.jpg">
<link rel="icon" href="img/logo.jpg"> 
~~~

# Cabeçalhos:
~~~html
<h2>Cabeçalhos:</h2>	
<h1>Cabeçalho tipo um</h1>  
<h2>Cabeçalho tipo dois</h2> 
<h3>Cabeçalho tipo três</h3> 
<h4>Cabeçalho tipo quatro</h4> 
<h5>Cabeçalho tipo cinco</h5> 
<h6>Cabeçalho tipo seis</h6>
~~~


# Formatação de texto:
~~~html
<h2>Formatação de texto:</h2>	
<b>Negrito</b> <br/>	
<strong>Negrito</strong> <br/>
<i>Itálico</i> <br/>		
<em>Ênfase</em> <br/>  
<u>Underline (usar css: text-decoration:)</u> <br/>
<sup>Sobrescrito</sup> <br/>	
<sub>Subscrito</sub> <br/>
<ins>Inserido</ins> <br/>		
<del>Excluído</del> <br/>
<small>Pequeno</small>	<br/>
<mark>Texto Destacado</mark> <br/>
<span>Bloco de texto</span> <br/>
~~~


# Parágrafos: 
~~~html
<p>Sou um parágrafo muito simples.</p>
~~~


# Links:  
> _blank=nova guia    
> _self=mesma guia
> Em target podemos colocar o id de um iframe
~~~html
<a href="http://www.inf.ufrgs.br/30anos" target="_blank"> Página em nova guia</a> <br/>
<a href="#outroParagrafo">Âncora para outro parágrafo.<a/>
<p id="outroParagrafo">Outro parágrafo.</a> <!-- ou <div id=par3></div> -->
~~~

# Tabindex e acesskey: 
> Para alternar entre os links com tab e acessar usando alt+tecla
~~~html
<a href="http://www.google.com" tabindex="3" accesskey="g">Google</a> <br/>
<a href="https://mail.google.com" tabindex="2" accesskey="m">Gmail</a> <br/>
<a href="https://www.facebook.com/" tabindex="1" accesskey="b">face</a> <br/>	
~~~

# Linha horizontal:
~~~html
<hr>
~~~

# Fieldset
~~~html
<fieldset>
	<legend>Utilizando Fieldset</legend>
	Muito legal utilizar fieldset.
</fieldset>
~~~



# Divs:
~~~html
<h2>Div:</h2>
<div> Sou uma div, um container/bloco para outros elementos!</div>	
~~~

# content editable: 
> Torna parte do texto editável

~~~html
<h2>Contenteditable</h2>
<div contenteditable>Texto editável. 
	<p contenteditable="false">Texto não editável.</p> 
</div>
~~~



# Datas:
~~~html
<h2>Datetime:</h2>
<time datetime="2020-01-15 18:30"> 15 de Janeiro de 2020 18:30 </time>
~~~


# Lista ordenada:  
> type=1, a, A, i, I
> É possível inserir subitens colocando dentro de <li> outra <ol> --> 
~~~html
<h2>Lista ordenada:</h2>
<ol type="1">
	<li>elemento 1 da lista ordenada</li>
	<li>elemento 2 da lista ordenada</li>
</ol>
~~~

# Lista não ordenada:
~~~html
<h2>Lista não ordenada:</h2>
<ul>
	<li>elemento</li>
	<li>elemento</li>
</ul>
~~~

# Lista de definição: Cada ítem tem um título e uma definição.
~~~html
<h2>Lista de definição:</h2>
<dl>
	<dt>Título 1</dt>
	<dd>Definição 1</dd>
	<dt>Título 2</dt>
	<dd>Definição 2</dd>		
</dl>
~~~

# Details: Pode-se inserir uma lista <ul> dentro por exemplo.
~~~html
<details>
	<summary>teste</summary>
		testando linha 1<br>
		testando linha 2
</details>
~~~



# Tabelas: 
> tr=linha, td=coluna, th=col cabeçalho, thead=cabeçalho, tbody=corpo,  tfoot=rodapé  row=linha

~~~html

<!-- <td rowspan="2">Coluna ocupando duas linhas</td> 
		<td colspan="4">linha ocupando quatro colunas</td> -->	
<table border="2">
	<caption>Legenda tabela</caption>
	<thead>
		<tr>
			<th>Cabeçalho, Coluna 1</th>
			<th>Cabeçalho, Coluna 2</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>Linha 1 Coluna 1</td>
			<td>Linha 1 Coluna 2</td>
		</tr>
	</tbody>
	<tfoot>
		<tr>
			<td>Rodapé, Coluna 1</td>
			<td>Rodapé, Coluna 2</td>
		</tr>
	</tfoot>
</table>
~~~

# Formulários:
> action=página que receberá dados
> method=post(via transação pós HTTP) ou get(dados visíveis na URL)
> required=torna campo obrigatório
> disabled=desabilita campo
> autofocus=foca cursor
> pattern=para validar campo, por exemplo CEP  pattern="\d{5}-?\d{3}" -->

~~~html
<form action="dados.php" method="post"> 

<!-- Básicos: --> 
	<h2>Inputs básicos:</h2>
	Nome: 					<input type="text" name="" id="" placeholder="texto" required><br/>
	Senha: 					<input type="password" placeholder="senha" maxlength="5" value=""><br/>
	Data de nascimento: 	<input type="date" min="1992-01-15" max="2192-01-15"><br/>
	Quantidade: 			<input type="number" min="0" max="1000" step="10"><br/>
	Quantidade:    			<input type="range" min="0" max="1000" step="10"> <br/><br/>
	Arquivo:				<input type="file" name="imagem"><br/>

	<!--Radio-Button Checked já deixa marcado --> 
	<h2>Radio-Button:</h2>
	<input type="radio" name="genero" value="male" checked> Male <br>
	<input type="radio" name="genero" value="female"> Female <br><br>

	<!--Checkbox -->
	<h2>Checkbox:</h2>
	<input type="checkbox" name="vehicle" value="Bike" checked>I have a bike<br>
	<input type="checkbox" name="vehicle" value="Car">I have a car <br/><br/>

	<!--Select, o optgroup é opcional --> 
	<h2>Select:</h2>
	<select>
		<optgroup label="Normais">
			<option value="terra">Terra</option>					
			<option value="lua">Lua</option>
			<option value="marte">Marte</option>
		</optgroup>
		<optgroup label="Alternativos">	
			<option value="outro" selected>Azectobrischptal</option>
		</optgroup>	
	</select> <br/><br/>


	<!-- Textarea --> 
	<h2>Textarea:</h2>
	<textarea name="" rows="5" cols="30" spellcheck="true"></textarea><br>

	<!-- Button -->
	<h2>Button e input type="button":</h2>
	<button>Sou um button</button><br/>
	<input type="button" value="Enviar"><br/>
	<input type="submit" value="Enviar formtarget" formtarget="_blank"><br/>
	<input type="submit" value="Enviar formaction" formaction="script.php"><br/>
	<input type="submit" value="Enviar formmethod" formmethod="GET"><br/>
	<input type="submit" value="Enviar formnovalidate" formnovalidate><br/>

	<!-- Outros --> 
	<h2>Outros:</h2>
	<input type="text" placeholder="text disabled" disabled> <br/>
	<input type="hidden" name="id"> hidden <br/>
	<input type="email" placeholder="email" autocomplete="on"> <br/>
	<input type="text" placeholder="CEP com validação" required pattern="\d{5}-?\d{3}" /> <br/>
	<input type="url" placeholder="url"> <br/>
	<input type="search" placeholder="search" name="busca"> <br/>
	<input type="tel" placeholder="tel" name="telefone"> <br/>
	<input type="text" placeholder="fora do form" form="cadastro"> <br/>

	<input type="time" name="hora"> <br/>
	<input type="month"> <br/>
	<input type="week"> <br/>
	<input type="datetime-local"><br/>
		
	<input type="color" name="cor"> <br/>
	<input name="Lista" list="habilidades">
		<datalist id="habilidades">
			<option value="HTML5">
			<option value="CSS3">
		</datalist>
</form>	
~~~


# Imagens:  
> title=atributo que mostra texto quando mouseOver, Ao modificar apenas width ou apenas height ele não distorce a imagem. --> 
~~~html
<img src="a.png" alt="texto altern" title="avatar" width="20 px" height="20 px" border="3 />	 
~~~


# figure e figurecaption: 
> Podemos inserir várias imagens e ter apenas uma legenda --> 
~~~html
<figure>
	<figcaption>Legenda da imagem</figcaption>
	<img src="fig.gif" alt="linux" title="Ubuntu" width="200">
</figure> 
~~~


# Object:  
> Insere objetos como imagens e arquivos pdf, Use this element to embed multimedia (audio, video, ActiveX, PDF Flash) in your  pages. --> 
~~~html
<object width="600" height="300" data="arq.pdf">
	An alternate text, for browsers that do not support this tag.
</object>
~~~


# Iframe:
~~~html
<iframe width="600" height="300" src="http://www.inf.ufrgs.br/ecp/descricao.html">
	<p>Your browser does not support iframes.</p>
</iframe>
~~~


# Mapeando imagens: 
> Shape=rect, circ ou polig coord canto --> 
~~~html
<img src="http://www.vinhadeluz.com.br/arquivos/Fotos/chicoxavierafflictor.jpg" width="450" usemap="#mapeiaImg">
<map name="mapeiaImg">
	<area shape="rect" coords="0,0,100,150" href="#"> 
</map>
~~~	

# Áudio:
~~~html
<audio controls autoplay loop src="musica.mp3"><!--mp3, ogg, wav -->
	Seu navegador não suporta este áudio.
</audio> <br/>
<audio controls src="musica.mp3" ><!--modo 2 -->
	<source src="musica.ogg" type="audio/ogg"> <!-- tenta esse ou o outro -->
	<source src="musica.mp3" type="audio/mpeg">
</audio>
~~~


# Vídeo:
~~~html
<iframe width="560" height="315" src="https://www.youtube.com/embed/KpteaHlu12g" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe><br/>

<video src="video.mp4" width="640" height="480" controls>
	Seu browser não suporta vídeo HTML5.
</video> <br/><br/>

<video width="640" height="480" controls>
	<source src="vdeio.webm" type="video/webm">
	<source src="video.mp4" type="video/mp4">
</video>
~~~

# Barra de progresso: 
> Obs.: Não é aceita no Internet Explorer 9 em diante.
~~~html
<progress max="100" value="50"></progress>
~~~
	

# Meter:  Medidor
~~~html
<meter value="12" min="0" max="14" low="2" optimum="7" high="12"> </meter>    
<meter value="0.5">50%</meter> <!--Em porcentagem -->
~~~

# Tags semânticas:
~~~html
<header> 		<!-- Tags responsáveis pelo cabeçalho -->
<nav> 			<!-- Tags responsáveis pela navegação -->
<aside></aside>
<footer> 		<!-- rodapé -->
<section> 		<!-- para cada seção -->
~~~