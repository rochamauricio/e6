--------------------------------------------------------------------- // Strings

// declarando e comparando strings
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>
	<script>
		var x = "John";  
		var y = "John";  
		document.getElementById("demo").innerHTML = ( x == y ); //retorna true
	</script>
</body>
</html>

---------------------------------------------------------------------

// encontrando posiçao da string no texto
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>
	<script>
		var str = "Please locate where 'locate' occurs!";
		var pos = str.indexOf( "locate" );
		document.getElementById("demo").innerHTML = pos;
	</script>
</body>
</html>

---------------------------------------------------------------------

// convertendo string em array (não sao a mesma coisa em javascript!)
<!DOCTYPE html>
<html>
<body>
	<button onclick="myFunction()">Try it</button>
	<p id="demo"></p>
	<script>
		function myFunction() {
		  var str = "a,b,c,d,e,f";
		  var arr = str.split(",");
		  document.getElementById("demo").innerHTML = arr[0];
		}
	</script>
</body>
</html>




