--------------------------------------------------------------------- // external javascript

<!DOCTYPE html>
<html>
<body>
	<p id="demo">A Paragraph.</p>
	<button type="button" onclick="myFunction()">Try it</button>
	<p>"(myFunction is stored in an external file called 'myScript.js')"</p>
	<script src="myScript.js"></script> // arquivo 1
	<script src="myScript2.js"></script> // arquivo 2
</body>
</html>


--------------------------------------------------------------------- // tag <script>

<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>
	<script>
		// código abaixo precisa ficar depois de <p id="demo"></p> senão não funciona!
		document.getElementById("demo").innerHTML = "My First JavaScript";
	</script>	
</body>
</html>


--------------------------------------------------------------------- //javascript in head

<!DOCTYPE html>
<html>
<head>
	<script>
		function myFunction() {
		  document.getElementById("demo").innerHTML = "Paragraph changed.";
		}
	</script>
</head>
<body>
	<p id="demo">A Paragraph.</p>
	<button type="button" onclick="myFunction()">Try it</button>
</body>
</html> 


--------------------------------------------------------------------- // javascript in body

<!DOCTYPE html>
<html>
<body>
	<p id="demo">A Paragraph.</p>
	<button type="button" onclick="myFunction()">Try it</button>
	<script>
		function myFunction() {
			document.getElementById("demo").innerHTML = "Paragraph changed.";
		}
	</script>
</body>
</html> 



--------------------------------------------------------------------- // getElementById()

// Modificando atributos de tags HTML
<!DOCTYPE html>
<html>
<body>
	<p id="demo">JavaScript can change HTML content.</p>
	<button type="button" onclick='document.getElementById("demo").innerHTML = "Hello JavaScript!"'>Click Me!</button>
</body>
</html>

---------------------------------------------------------------------

// Modificando atributos de tags HTML
<!DOCTYPE html>
<html>
<body>
	<img id="myImage" src="bulboff.gif" style="width:100px">
	<button type="button" onclick='document.getElementById("myImage").src="bulbon.gif"'>Turn on the ligh</button>
	<button type="button" onclick='document.getElementById("myImage").src="bulboff.gif"'>Turn off the ligh</button>
</body>
</html>

---------------------------------------------------------------------

// Modificando o estilo CSS de um elemento
<!DOCTYPE html>
<html>
<body>
	<p id="demo">"JavaScript can change the style of an HTML element."</p>
	<button type="button" onclick="document.getElementById('demo').style.fontSize='35px'">Click Me!</button>
</body>
</html>


---------------------------------------------------------------------


// Escondendo e mostrando elementos HTML
<!DOCTYPE html>
<html>
<body>
	<p id="demo">JavaScript can hide HTML elements.</p>
	<button type="button" onclick="document.getElementById('demo').style.display='none'">Hide HTML element</button>
	<button type="button" onclick="document.getElementById('demo').style.display='block'">Show hidden HTML element</button>	
</body>
</html>

---------------------------------------------------------------------

// Lendo um campo de texto
<!DOCTYPE html>
<html>
<body>
	<input type="text" id="demo">
	<button type="button" onclick="alert(document.getElementById('demo').value)">Try</button>
</body>
</html>


--------------------------------------------------------------------- // document.write()

<!DOCTYPE html>
<html>
<body>
	<p>"Never call document.write after the document has finished loading."</p>
	<p>"It will overwrite the whole document."</p>

	<script>
		document.write("Using document.write() after an HTML document is loaded, will delete all existing HTML");
	</script>
</body>
</html> 

---------------------------------------------------------------------

// exemplo que document.write sobrescreve HTML existente
<!DOCTYPE html>
<html>
<body>
	<h1>My First Web Page</h1>
	<p>My first paragraph.</p>
	<button type="button" onclick="document.write(5 + 6)">Try it</button>
</body>
</html> 


--------------------------------------------------------------------- // window.alert()

<!DOCTYPE html>
<html>
<body>
	<script>
		window.alert( "resultado = " + eval(5 + 6));
	</script>
</body>
</html> 


--------------------------------------------------------------------- // console.log()

//For debugging purposes, you can call the console.log() method in the browser to display data.
<!DOCTYPE html>
<html>
<body>
	<script>
		console.log( "a resposta é =" + eval( 5 + 6 ) );
	</script>
</body>
</html> 

--------------------------------------------------------------------- // window.print()
// imprimir a página
<!DOCTYPE html>
<html>
<body>
	<h2>"The window.print() Method"</h2>
	<p>"Click the button to print the current page."</p>
	<button onclick="window.print()">Print this page</button>
</body>
</html> 


--------------------------------------------------------------------- // typeof
// retornando o tipo de uma variável
<!DOCTYPE html>
<html>
<body>
	<p>"The typeof operator returns the type of a variable or an expression."</p>
	<p id="demo"></p>
	<script>
		var x = 10, nome = "Mauricio"; 
		document.getElementById("demo").innerHTML = typeof x + "<br>" +	typeof nome + "<br>";
	</script>
</body>
</html>



--------------------------------------------------------------------- // functions
// exemplo básico de função com argumentos
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>
	<script>
		function myFunction(p1, p2) {
		  return p1 * p2;
		}
		document.getElementById("demo").innerHTML = myFunction(5, 3);
	</script>
</body>
</html>


---------------------------------------------------------------------

// outro exemplo legal com funções
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>
	<script>
		var x = myFunction(4, 3);
		document.getElementById("demo").innerHTML = x;

		function myFunction(a, b) {
		  return a * b;
		}
	</script>
</body>
</html>

