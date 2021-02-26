--------------------------------------------------------------------- // Arrays
// exemplo básico - arrays são objetos em JS!
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>
	<script>
		var fruits = ["Banana", "Orange", "Apple", "Mango"];  // não utilizar: var cars = new Array("Saab", "Volvo", "BMW");
		var last = fruits[ fruits.length - 1 ];
		document.getElementById("demo").innerHTML = last;
	</script>
</body>
</html>


---------------------------------------------------------------------

// colocando array numa <ul> - bem legal
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>

	<script>
		var fruits, text, fLen, i;
		fruits = ["Banana", "Orange", "Apple", "Mango"];
		fLen = fruits.length;

		text = "<ul>";
		for (i = 0; i < fLen; i++) {
		  text += "<li>" + fruits[i] + "</li>";
		}
		text += "</ul>";
		document.getElementById("demo").innerHTML = text;
	</script>
</body>
</html>


---------------------------------------------------------------------

// exemplo legal usando splice no array
<!DOCTYPE html>
<html>
<body>
	<button onclick="myFunction()">Try it</button>
	<p id="demo1"></p>
	<p id="demo2"></p>
	<p id="demo3"></p>

	<script>
		var fruits = ["Banana", "Orange", "Apple", "Mango"];
		document.getElementById("demo1").innerHTML = "Original Array:<br> " + fruits;

		function myFunction() {
		  var removed = fruits.splice(2, 2, "Lemon", "Kiwi"); 
		  document.getElementById("demo2").innerHTML = "New Array:<br>" + fruits;
		  document.getElementById("demo3").innerHTML = "Removed Items:<br> " + removed; 
		}
	</script>
</body>
</html>



---------------------------------------------------------------------


// exemplo legal ordenando um array de maneira alfabética e de maneira numérica
<!DOCTYPE html>
<html>
<body>
	<button onclick="myFunction1()">Sort Alphabetically</button>
	<button onclick="myFunction2()">Sort Numerically</button>

	<p id="demo"></p>

	<script>
		var numeros = [40, 100, 1, 5, 25, 10];
		document.getElementById("demo").innerHTML = numeros;  

		function myFunction1() {
		  numeros.sort();
		  document.getElementById("demo").innerHTML = numeros;
		}
		function myFunction2() {
		  numeros.sort(function(a, b){return a - b});	// aqui uma função de comparação é criada e passada como parâmetro para a função sort(), que originalmente ordena strings
		  document.getElementById("demo").innerHTML = numeros;
		}
	</script>
</body>
</html>


---------------------------------------------------------------------

// exemplo da melhor forma de "bagunçar array de forma aleatória": The Fisher Yates Method
<!DOCTYPE html>
<html>
<body>
	<button onclick="myFunction()">Try it</button>

	<p id="demo"></p>

	<script>
		var points = [40, 100, 1, 5, 25, 10];
		document.getElementById("demo").innerHTML = points;  

		function myFunction() {
		var i, j, k;
		  for (i = points.length -1; i > 0; i--) {
			j = Math.floor(Math.random() * i)
			k = points[i]
			points[i] = points[j]
			points[j] = k
		  }
		  document.getElementById("demo").innerHTML = points;
		}
	</script>
</body>
</html>

---------------------------------------------------------------------

// exemplo legal: Sorting Object Arrays - ordenando pelo ano
<!DOCTYPE html>
<html>
<body>
	<button onclick="myFunction()">Sort</button>
	<p id="demo"></p>

	<script>
		var cars = [
		  { type:"Volvo", year:2016 },
		  { type:"Saab", year:2001 },
		  { type:"BMW", year:2010 }
		];

		displayCars();

		function myFunction() {
		  cars.sort(function(a, b){return a.year - b.year});
		  displayCars();
		}

		function displayCars() {
		  document.getElementById("demo").innerHTML =
		  cars[0].type + " " + cars[0].year + "<br>" +
		  cars[1].type + " " + cars[1].year + "<br>" +
		  cars[2].type + " " + cars[2].year;
		}
	</script>
</body>
</html>


---------------------------------------------------------------------

// exemplo legal: Sorting Object Arrays - ordenando pelo nome do carro
<!DOCTYPE html>
<html>
<body>
	<button onclick="myFunction()">Sort</button>
	<p id="demo"></p>

	<script>
		var cars = [
		  {type:"Volvo", year:2016},
		  {type:"Saab", year:2001},
		  {type:"BMW", year:2010}
		];

		displayCars();

		function myFunction() {
		  cars.sort(function(a, b){
			var x = a.type.toLowerCase();
			var y = b.type.toLowerCase();
			if (x < y) {return -1;}
			if (x > y) {return 1;}
			return 0;
		  });
		  displayCars();
		}

		function displayCars() {
		  document.getElementById("demo").innerHTML =
		  cars[0].type + " " + cars[0].year + "<br>" +
		  cars[1].type + " " + cars[1].year + "<br>" +
		  cars[2].type + " " + cars[2].year;
		}
	</script>
</body>
</html>


---------------------------------------------------------------------

// iterador foreach 
<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>

	<script>
		var txt = "";
		var numbers = [45, 4, 9, 16, 25];
		numbers.forEach(myFunction);
		document.getElementById("demo").innerHTML = txt;

		function myFunction(value, index, array) {  //poderiamos omitir index e array
		  txt = txt + value + "<br>"; 
		}	
	</script>
</body>
</html>




