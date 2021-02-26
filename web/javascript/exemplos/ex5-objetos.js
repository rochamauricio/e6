--------------------------------------------------------------------- // exemplo básico

<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>

	<script>
		// Create an object:
		var car = { type:"Fiat", model:"500", color:"white" };

		// Display some data from the object:
		document.getElementById("demo").innerHTML = "The car type is " + car.type;
	</script>
</body>
</html>


--------------------------------------------------------------------- // usando métodos

<!DOCTYPE html>
<html>
<body>
	<p id="demo"></p>

	<script>
		// Create an object:
		var person = {
		  firstName: "Mauricio",
		  lastName : "Rocha",
		  age     : 28,
		  fullName : function() {
			return this.firstName + " " + this.lastName;
		  }
		};
		// Display data from the object:
		document.getElementById("demo").innerHTML = person.fullName();
	</script>
</body>
</html>

--------------------------------------------------------------------- // Criando e utilizando o objeto arguments dentro de uma função

<!DOCTYPE html>
<html>
<body>
	<script>
		function mensagem()
		{
		   for( i = 0; i < mensagem.arguments.length; i++ ) 
			  alert(mensagem.arguments[i]);
		}
		mensagem("Evangelizar é amar", "Mestre Jesus", "Vamos cuidar da natureza");
	</script>
</body>
</html>










