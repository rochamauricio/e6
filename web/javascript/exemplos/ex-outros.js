--------------------------------------------------------------------- // Exemplo de código "enxuto"

function podeSeAposentar(idade, sexo, anos ) {
	return ( idade >= 60 && sexo == 'F' && anos >= 30 ) || ( idade >= 65 && sexo == 'M' && anos >= 30 )
}
console.log( podeSeAposentar( 65, 'F', 30 ) );



--------------------------------------------------------------------- // Deixando texto com letras maiúsculas e minúsculas alternadas

<!DOCTYPE html>
<html><head><title>Treino JS</title> 
<script>
function vai()
{
	nome = "Mauricio Barbosa da Rocha";
	tmp = "";
	n = nome.split("");
	for( i= 0; i < n.length; i++ )
		if( i % 2 == 0 )
			tmp += n[i].toUpperCase();
		else
			tmp += n[i].toLowerCase();
	document.getElementById("example1").innerHTML = nome;
	document.getElementById("example2").innerHTML = tmp;
}
</script>
</head><body onload="vai()">
	<p id="example1"></p>
	<p id="example2"></p>
</body></html>






//___________________________________________


// Texto em movimento em um campo de texto
<!DOCTYPE html>
<html><head><title>Treino JS</title> 
<script>

var mensagem = "O Maurício ta aprendendo JS";
var texto;
var ligado = false;
var timeoutID = null;
var posicao = 0;
var tamanho;
var janela;

function ligarMarquee()
{
    if ( ligado ) 
        pararMarquee();
        
    texto = document.form1.marquee.value + mensagem + document.form1.marquee.value;
    tamanho = texto.length;
    janela = document.form1.marquee.size;
    atualizarMarquee();
    ligado = true;
}

function pararMarquee()
{
    if (ligado) 
        clearTimeout(timeoutID);
    ligado = false;
}

function atualizarMarquee()
{
    document.form1.marquee.value=texto.substring(posicao++%tamanho, posicao+janela%tamanho);
    timeoutID = setTimeout("atualizarMarquee()", 100);
 }

</script>
</head><body><form name="form1"><p><input type="text" name="marquee" value=" " size="20"><br> 
<input type="button" name="ligar" value="Ligar" onClick="ligarMarquee();"> 
<input type="button" name="parar" value="Parar" onClick="pararMarquee();"> </p>
</form></body></html>
