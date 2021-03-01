# inserindo códigos css em arquivos html

~~~html

<!-- Incluindo o .css a partir de um arquivo externo - modo 1 - baixa precedência -->
<link rel="stylesheet" type="text/css" href="/caminho/style.css" />

<!--  Incluindo o .css a partir de um arquivo externo - modo 2 - baixa precedência -->
<style type="text/css">@import url("caminho/estilo.css");</style>

<!-- Incluindo css dentro do head com a tag <style> - média precedência -->
<style type="text/css">
body {
  color: #009900;
}
</style>

<!-- Incluindo css dentro de uma tag com o atributo style - alta precedência -->
<div style="padding: 10px; margin: 10px; color: green;">(...) </div>

<!-- Usar o google fonts: Basta incluir o nome da fonte em font-family -->
<link href="https://fonts.googleapis.com/css?family=Raleway" type="text/css" rel="stylesheet">

~~~ 

# sintaxe do css

~~~css
/* identação correta: */
h1 {  /* um espaço */  
  color: blue; /* dois espaços */  
}
/* Uma linha em branco e segue próximo seletor */

/* Seletores: um seletor */
p {
  font-size: 42px; /* Edita parágrafo <p> (...) </p> */
}

/* Seletores: multiplos seletores */
h1, h2, p {
  color: green;
}

/* Seletores: seleciona o caption de todas tabelas */
table caption {
  color: green;
}

/* Seletor universal: se aplica a todos elementos da página  */
* {
  color: green;
}

/* Seletor Atributo: no exemplo aplica propriedade somente a inputs do tipo submit */
input[type="submit"] {
  width: 300px;
}

/* IDs em css: usados para identificar um único elemento. 2 elementos não podem ter mesmo ID. Aplica a propriedade em <div id=”header”>...</div> */
#header {
  color: green;
}

/* Classes: Uma classe serve para identificar vários elementos. Um elemento  pode ter várias classes: <div class="container content">...</div> */

/* <div class="container"> Estilizado por uma classe </div> <h1 class="book domestic"> Estilizado por 2 classes </h1> */
.container {
  color: #008000;
}

div.container {
  color: green;
}

/* Classes: Formata todos os parágrafos da classe .breaking */
.p.breaking {
  color: green;
}

/* Classes: Formata os <p> com class=enf q estiver dentro da div class=cont */
div.cont p.enf {
  color: green;
}

~~~


# textos

~~~css

.classeTexto {
  text-decoration: underline;       /* Fontes e textos: Padrão Default browsers: Times New Roman*/
  text-shadow: 2px 2px 4px #FF0000; /* overline, underline */
  text-indent: 30px;                /* Posição horiz, vertical, desfoque e cor */
  text-transform: uppercase;        /* uppercase capitalize lowercase */
  text-align: left;                 /* center right */
  font-family: cursive, Times;      /* Redundância para fontes */
  font-family: "Times New Roman";   /* "" para nomes com espaço*/
  font-style: italic;               /* normal, italic, oblique*/
  font-size: 18px;                  /* px = pixels, em 200% ou em 1.3em */
  font-weight: bold;                /* ou normal ou 100, 200, …, 800, 900*/
  font-variant: small-caps;         /* normal, small-caps */
  word-spacing: 0.3em;              /* default: 0.25em */
  letter-spacing: 0.3em;
  line-height: 1.8;
  white-space: nowrap;              /* pre, pre-line, pre-wrap, initial */
  color: white;
  line-height: 1.7em;               /* em px ou ems aumentar espaço entre linhas*/
}

~~~




# Cores: 
>Há 147 named colors (ex blue)

~~~css

p {
  color: red;
  color: rgb(123, 20, 233);         /* Cor na base 10 */
  color: rgba(123, 88, 9, 0.5);     /* RGB Alpha 0 <= a <= 1 */
  color: #09AA34;                   /* Hexadecimal. #FFFFFF é a mesma cor que #FFF, #AA33BB é a mesma cor que #A3B */
  color: hsl(182.2, 20%, 50%);      /* HSL colors: Hue, Saturation, and Lightness; ex: hsl(182, 20%, 50%). Hue: 0 a 360. Saturation: 0% a 100%. Lightness: 0% a 100%. */
  color: hsla(239, 45%, 22%, 0.4);
  opacity: 0.5;                     /* Nível de transparencia em porcentagem */
}

/* Redundância para caso o navegador não tenha suporte para rgba. A última declaração têm prioridade */
h1 {
  color: rgb(22, 34, 88);
  color: rgba(22, 34, 88, 0.4);
}

/* Linear Gradient */
div {
  background: linear-gradient(to top right, rgba(255, 0, 0, 0), blue, green, yellow); /* to right, left, top;  to top right /// Angulos: 80deg */
}

/* Radial Gradient */
div {
  background: radial-gradient(red, green, blue);
}

~~~

# Background

~~~ css
div {
  background-image: url("../img/hogwarts3.jpg"), url("../img/hogwarts.jpg");
  background-size: 95% 95%; /* cover=cobre toda a tela */
  background-repeat: no-repeat;
  background-attachment: fixed;
  background-color: #e6eeff;
  background-position: center center; /* x e y bottom */
  background-origin: content-box; /* or border-box */
  background-clip: padding-box; /* content-box   */
  background: url(img_flwr.gif) right bottom no-repeat, url(paper.gif) left top repeat;
  background: radial-gradient(#ccf2ff, #80cbff, #1aa1ff, #002d4d);
}

~~~

# border

~~~css

div {
  border-radius: 20px 50px 100px 0px;
  /* Raio da borda arredondada border-top-left-radius */
  border-style: dotted;
  /* dotted, dashed, solid, double, groove, ridge, inset, outset */
  border-color: #ff0000;
  border-left-color: blue;
  border-right-color: blue;
  border-bottom-style: double;
  border-width: 10px;
  border: solid 5px red;
  outline: solid 5px gray;
  /* outline faz quase tudo q o border faz, mas não edita lados individualmente */
}

~~~


# listas

~~~css
ul {
  list-style-type: none;
  list-style-image: url('hommer.jpg');
  overflow: hidden; //scroll, hidden, auto, visible
}

/* last-child: aplica a propriedade somente ao último ítem de uma sequência de itens */
li:last-child {
  border-right: none;
}

~~~


# position, padding, margin

~~~css

div {
  position: static;          /* é o padrão, não faz nada */
  position: fixed;           /* fixa elemento na posição */
  position: relative;   
  top: -20px;   
  left: 20px;               /* deve ter top, left, … definidas, posição relativa à pos do elem */
  position: absolute;       /* Igual fixed, porém em rel ao elem relativo mais próximo */
  display: inline-block;    /* inline (span, a), block(div, p, form, header ...), inline-block */
  float: left;              /* right, quebra texto ao redor de uma imagem */
  clear: left;              /* Controla o comportamento de elementos flutuantes */
  overflow: auto;           /* scroll, hidden, auto, visible - Macete do clearfix */
  direction: ltr;           /* left to right. há rtl, direciona texto dentro de div */
}

div {
  margin: 50px 0px 0px 50px;    /* ou margin-top, margin-right, margin-bottom, margin-left */
  padding: 50px 0px 0px 50px;   /* padding-top, padding-right, padding-bottom, padding-left - padding não aumenta o tamanho do elemento*/
  max-width: 400px;             /* melhor do que width: 400px; pois adapta-se ao tam da tela */
  min-width: 50px;              /* melhor do que height: 50px; */
  box-shadow: 10px 10px 5px green;
  box-sizing: border-box;                       
  overflow: auto;   /* visible, hidden, scroll permite barra rolagem na div */
  opacity: 0.5;     /*nivel de transparencia em porcentagem*/
}

~~~


# transition: a propriedade transition suaviza a transição de estado

~~~css

div {
  transition-property: all; /* width height all  */
  transition-duration: 1s;  /* Sempre em segundos! */
  transition-delay: 2s;     /* Tempo de espera para iniciar a transição.*/
  transition-timing-function: ease; /* ease, ease-in, ease-out, ease-in-out, linear */
  transition: width 2s linear 1s, height 2s linear; /* insere no estilo do objeto que irá mudar */
}

~~~


# outros estilos

~~~css
div {
  cursor: pointer;              /* wait e infitos outros em https://www.w3schools.com/cssref/pr_class_cursor.asp */
  cursor: url(img.jpg), auto;   /* insere imagem no lugar do cursor */
}


/* Insere texto antes de todos os parágrafos */
p:before {
  content: " texto antes dos parágrafos. ";
  color: green;
}

/* Insere texto após todos os parágrafos */
p:after {
  content: " texto depois dos paragráfos. ";
  color: red;
}

/* Insere texto apos todos parágrafos quando o mouse passa sobre o parágrafo */
p:hover:after {
  content: " texto surge ao mover mouse no parágrafo. ";
  color: blue;
  background-color: yellow;
}

/* hover: realiza estilo quando mexer mouse sobre o item */
li a:hover:not(.ativo) {
  color: green;
}

/* last-child: insere estilo somente o último item de uma série de itens. Ex.: último elemento de uma lista. */
li:last-child {
  border-right: none;
}

~~~

