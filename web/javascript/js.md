# links
	// http://devfuria.com.br/javascript/manipulando-combobox-select-com-javascript/ 


# criar variáveis 
> é uma boa prática iniciar as variáveis com o tipo de dados que elas vão armazenar
~~~javascript
var nome="";
let contador=0; // só é acessível nos blocos de código em que for declarada

// tipo de variaveis
x = typeof y; // retorna o tipo de y
~~~

# diversos
~~~javascript
// avaliar uma expressão entre parênteses:
x = eval( "2 + 3" );
alert( x ); // printa 5


// testar se valor não é um número (is not a number):
if( isNaN( "bolacha" ) )
  alert( "Isso não é um número" );  

// converter uma string em inteiro
valor = "27";
valor = parseInt( valor );
alert( valor + 1 );

// converter uma string em um float:
valor = parseFloat( "124.5" );
alert( valor + 1 );

// converte string em inteiro na base decimal, hexa, bin, etc
valor = parseInt( "100", 10 );	// lê como decimal: salva 100 em valor
valor = parseInt( "a", 16 ); 	// lê como hexadecimal: salva 10 em valor
valor = parseInt( "20", 8 );  	// lê como octal: salva 16 em valor
valor = parseInt( "1111", 2 );  // lê como binário: salva 15 em valor


// converte numero em string
var myNumber = 32;
myNumber.toString( 10 );  // returns 32
myNumber.toString( 32 );  // returns 10
myNumber.toString( 16 );  // returns 20
myNumber.toString( 8 );   // returns 40
myNumber.toString( 2 );   // returns 100000


// arredondamentos
var x = 9.656;
x.toFixed(0);           // returns 10
x.toFixed(2);           // returns 9.66
x.toFixed(4);           // returns 9.6560
x.toFixed(6);           // returns 9.656000


// convertendo uma data em um número
Number(new Date("2017-09-30"));    // returns 1506729600000
~~~


# eventos
~~~javascript
onblur = alert("oi"); 		// onblur: Ocorre quando o usuário retira o foco de um objeto de formulário. // exemplo legal: <input type="text" onfocus="this.value='Mauricio Barbosa da Rocha'"> 
onselect = alert("oi");		// onselect: Ocorre quando o usuário seleciona um elemento de um formulário.
onfocus = alert("oi"); 		// onfocus: Ocorre quando o usuário focaliza o objeto.
onchange = alert("oi");		// onchange: Ocorre quando o usuário muda o valor de um objeto de formulário.
onclick = alert("oi");		// onclick: Ocorre quando o usuário clica sobre o objeto.
onmouseover = alert("oi");	// onmouseover: Ocorre quando o ponteiro do mouse passa sobre um link ou âncora. 
onmouseout = alert("oi");	// onmouseout: Ocorre quando o ponteiro do mouse afasta de um objeto.
onmousemove = alert("oi");	// onmousemove: Ocorre quando o ponteiro do mouse se movimenta sobre o objeto.
onmousedown = alert("oi");	// onmousedown: Ocorre quando o botão do mouse é pressionado.
onmouseup = alert("oi");	// onmouseup: Ocorre quando o botão do mouse é solto.
onkeydown = alert("oi");	// onkeydown: Ocorre quando uma tecla é segurada.
onkeypress = alert("oi");	// onkeypress: Ocorre quando uma tecla é pressionada.
onkeyup = alert("oi");		// onkeyup: Ocorre quando o usuário solta uma tecla. 
onload = alert("oi");		// onload: Ocorre quando o usuário carrega a página.
onsubmit = alert("oi");		// onsubmit: Ocorre quando o usuário envia um formulário.
~~~

# string methods and properties 
> all string methods return a new string. They don't modify the original string.
~~~javascript
var texto = "Mauricio";
var tam = texto.length;
var pos = texto.indexOf('Mauricio');	// posição da primeira ocorrencia de Mauricio na string. Se não encontar retorna -1
var pos = texto.indexOf('Mauricio',15); // começa a procurar a partir do caractere 5
var pos = texto.lastIndexOf('a');		// posição da última ocorrencia de Mauricio na string. Se não encontar retorna -1
var pos = texto.lastIndexOf('a', 12); 	// começa do caractere 12 pra trás. 12 é um offset.
var pos = str.search("locate");			// searches a string for a specified value and returns the position of the match
var res = str.slice( 0, 5 );			// pedaço da string - do índice 0 ao 5
var res = str.substring( 0, 5 );		// pedaço da string - do índice 0 ao 5
var res = str.substr( 0, 8 );			// pedaço da string - do indice 0 a 8 posições a frente
var res = str.substr( -4 );				// pedaço da string - últimos 4 caracteres
var res = str.replace( "ana", "mara");  // substitui ana por mara na string
var res = str.replace( /ANA/i, "mara"); // substitui ana por mara sem usar case sensitive
var res = str.replace( /ANA/g, "mara"); // substitui ana por mara em todas ocorrencias de mara
var res = str.replace( /ANA/ig, "mara");// combinação das 2 anteriores 
var n = nome.toLowerCase();		
var n = nome.toUpperCase();
var res = text1.concat("#",text2); 	// concatena: string text2 no final da string 1 usando o separador #
var res = str.trim(); 				// remove espaços do início e do fim da string
var res = str.charAt( 0 );			// retorna a primeira letra da string str
var res = str.charCodeAt( 0 );      // retorna o valor unicode do caractere de posição 0
var arr = str.split(",");  			// converte string str no array arr
~~~

# arrays
~~~javascript
var nomes = []; 								// cria array (inicializa com zero), não usar var nomes = new Array();
var nomes = [ "Mauricio", "Maria", "Joana" ];	// cria e inicializa array, outro jeito (não recomendável): nomes = new Array( "mauricio", "maria", "joana" ); 
var notas[ 0 ] = 10;							// inicializa primeiro elemento
var tamaArray = nomes.length;					// retorna o tamanho do array
var tipo = typeof( pessoa )						// retorna a string "object", significa que a variável pessoa é um array (arrays são objetos em JavaScript)
var ehArray = Array.isArray( nomes );			// retorna true se "nomes" for um array (não suportada por todos browsers)
var elementosArray = nomes.toString();			// converte array em string. retorna elementos do array separados por vírgula, outra forma mais simples: elementosArray = nomes;
var elementosArray = nomes.join( "*" );			// mesmo que toString porém com '*' como separador, 
var nomes.pop();								// remove o último elemento do array -  method returns the value that was "popped out":
var nomes.push( "Bernadete" );					// insere "Bernadete" no fim do array
var nomes.shift();								// remove o primeiro elemento do array - The shift() method returns the string that was "shifted out":
var nomes.unshift("bernadete");					// insere "Bernadete" no início do array
delete fruits[0];           					// Changes the first element in fruits to undefined - Use pop() or shift() instead.
var fruits.splice( 2, 0, "Lemon", "Kiwi" );		// add itens no array. 1º arg: posição onde inserir no array, 2º arg: quantos elementos serão removidos- The splice() method returns an array with the deleted items
var fruits.splice( 0, 2 );						// remove os 2 primeiros elementos
var myChildren = myGirls.concat( myBoys );		// concatena arrays - The concat() method does not change the existing arrays. It always returns a new array.
var myChildren = arr1.concat(arr2, arr3);   	// Concatenates arr1 with arr2 and arr3 
var myChildren = arr1.concat("Peter");			// The concat() method can also take strings as arguments
var arr2 = arr1.slice( 2 );						// copia para arr1 o 2º elemento em diante
var arr2 = arr1.slice( 0, 3 );					// copia para arr1 do elemento 0 até o elemento (3 - 1) - não inclui o elemento 3
fruits.sort(); 									// ordena String do menor ao maior - por padrão para strings - "25" is bigger than "100"
fruits.reverse();								// inverte a ordem atual do array de Strings
numeros.sort(function(a, b){return a - b });	// ordena o array númerico "numeros" de modo decrescente - If the result "a - b" is negative a is sorted before b.
numeros.sort(function(a, b){ return b - a } ); 	// ordena o array númerico "numeros" de modo decrescente
numeros.sort(function(a, b){return 0.5 - Math.random()});	// oredena array numérico em ordem aleatória
var maior = Math.max.apply( null, numeros );				// retorna o maior número do array numeros - não é a solução mais rápida
menor = Math.min.apply( null, numeros );					// retorna o menor número do array numeros - não é a solução mais rápida	
cars.sort(function(a,b){return a.year - b.year});			// sorting object arrays
numbers.forEach( myFunction ); 								// iterador foreach - ver exemplo - The forEach() method calls a function (a callback function) once for each array element. - - mais informaçoes(inclusive sobre Array.map(), Array.filter(), Array.reduce(), Array.every(), Array.some(), Array.indexOf(), Array.find(), Array.findIndex()) em: https://www.w3schools.com/js/js_array_iteration.asp
var indice = fruits.indexOf("Apple");			// retorna o índice de "Apple" no array fruits - Array.indexOf() returns -1 if the item is not found.
var indice = fruits.lastIndexOf("Apple");		// retorna o indice da última ocorrência de apple no array fruits
~~~

# objeto Date 
> JavaScript counts months from 0 to 11. 
~~~javascript
var hoje = new Date(); 								// atribui ao objeto a data e hora correntes  
var data = new Date( 2019, 10, 18 ); 				// 18 de Novembro de 2019
var data = new Date( 2019, 10, 18, 15, 16, 22 );	// 18 de Novembro de 2019 15:16:22 
var ano = hoje.getFullYear();						// Get the year as a four digit number (yyyy)
var mes = hoje.getMonth();							// Get the month as a number (0-11)
var dia = hoje.getDate();							// Get the day as a number (1-31)
var hor = hoje.getHours();							// Get the hour (0-23)
var minut = hoje.getMinutes();						// Get the minute (0-59)
var seg = hoje.getSeconds(); 						// Get the second (0-59)
var msg = hoje.getMilliseconds(); 					// Get the millisecond (0-999)
var dia = hoje.getTime();							// Get the time (milliseconds since January 1, 1970)
var dia = hoje.getDay(); 							// Get the weekday as a number (0-6), 0 == Domingo
hoje.toLocaleString();							// imprime no formato: 16/12/2019 13:34:57
hoje.setFullYear( 2020 );						// Set the year (optionally month and day)
hoje.setMonth( 11 );							// Set the month (0-11)
hoje.setDate( 19 ); 							// Set the day as a number (1-31) The setDate() method can be used to add days to a date.
hoje.setHours( 17 ); 							// Set the hour (0-23)
hoje.setMinutes( 30 ); 							// Set the minutes (0-59)
hoje.setSeconds( 1 ); 							// Set the seconds (0-59)
hoje.setMilliseconds();							// Set the milliseconds (0-999)
hoje.setTime(); 								// Set the time (milliseconds since January 1, 1970)
hoje.setDate( hoje.getDate() + 50); 			// The setDate() method can be used to add days to a date.
	// Exemplo que faz equivalente a date3 = date2 - date1
	var date1 = new Date(2019, 10, 18); 
	var date2 = new Date(2019, 10, 19);
	var date3 = date2;
	date3.setDate( date2.getDate() - date1.getDate() ); 
	alert( date3.getDate() );
~~~

# objeto Math
~~~javascript
var x = Math.PI; 		// constante de PI
var x = Math.E;			// constante de Euler
var x = Math.LN2;		// logaritmo natural de 2
var x = Math.LN10;		// logaritmo natural de 10
var x = Math.LOG2E; 	// logaritmo na base 2 de Euler
var x = Math.LOG10E; 	// logaritmo na base 10 de Euler
var x = Math.SQRT1_2; 	// raiz quadrada de um meio
var x = Math.SQRT2; 	// raiz quadrada de 2
var x = Math.abs( valor ); 	// retorna o módulo da variável valor
var x = Math.sin( 0 );		// retorna o seno de 90 graus
	// exemplo legal	
	var x = Math.sin( Math.PI / 2 );
var x = Math.cos( 0.12 );	// retorna o cosseno do ângulo (em radianos)
var x = Math.tan( 0 );		// retorna a tangente do ângulo (em radianos)
var x = Math.asin( 1 );		// retorna o arco (em radianos) cujo seno  é 1
var x = Math.acos( 1 );		// retorna o arco (em radianos) cujo cosseno  é 1
var x = Math.exp( 1 );		// retorna a exponenciação de Euler no expoente 1
var x = Math.log(1);		// retorna o logaritmo natural de um número (base E).
var x = Math.max( 2, 9 );	// retorna o maior valor entre 2 números
var x = Math.min( 2, 9 );	// retorna o menor valor entre 2 números
var x = Math.pow( 2, 3 );	// retorna a base elevada ao expoente
var x = Math.sqrt( 100 );	// retorna a raiz quadrada de um número.
var x = Math.floor( 2.6 );	// arredonda para 2
var x = Math.ceil( 2.4 );	// arredonda para 3
var x = Math.round(125.6);	// arredonda valor seguindo regra
var x = Math.random();		// Retorna um número aleatório entre 0 e 1 com até 15 dígitos
	// exemplo legal:
	var x = Math.floor( Math.random() * 100 ) + 1;	// aleatórios de 1 a 100
~~~

# algumas funções legais

~~~javascript
// getElementById
document.getElementById("demo").innerHTML = "Hello JavaScript!";
document.getElementById("myImage").src = "imagem.png";
document.getElementById("demo").style.fontSize = "35px";
document.getElementById("demo").style.display = "none";
x = document.getElementById("demo").value;
x = document.getElementById("demo").innerHTML;

// getElementsByClassName

// event listner

// expressões regulares
~~~








