# links
	https://www.youtube.com/watch?v=4tBeeMcw2sM
	https://www.w3schools.com/php/default.asp

# ver
	PHP PDO!!		
	Design Pattern
	Query Object


# anotacoes

	 As funções mysql_* estão obsoletas. A recomendação é utilozar MYSQLI ou PDO.
	 A biblioteca MySQL está obsoleta: não usar as funções mysql_connect, mysql_query, Eenfim: mysql_*

# criando um banco com o phpmyadmin

> Acesse: localhost/phpmyadmin/
> Criar banco:	Novo -> Criar base de dados (digite o nome) -> criar
> Criar tabela: ... -> executar
>	 define tipo, tamanhos
>	 chave primaria: marca A.I (auto incrementar), indice (marca primario) -> executar
>	 Motor de armazenamento: marca MyISAM





# consulta SELECT com mysqli
~~~php
// abre conexão com o mysql
$conn = mysqli_connect('localhost', 'root', '', 'treinophp'); // servidor (host), usuario, senha, nome do banco de dados

// verifica erro
if(!$conn)
	echo "erro ao tentar se conectar com o banco de dados";	
	
// executa a consulta
$sql = "select * from usuarios ORDER BY nome"; // todos campos da tabela usuarios - pode remover ORDER BY nome
$res = mysqli_query($conn, $sql) or die("Erro"); 

// conta o numero de registros
$total = mysqli_num_rows($res);
echo "total de registros = $total <br><br>";

// busca registros da tabela selecionada - outra forma usando: mysqli_fetch_array($res)
while($dados = mysqli_fetch_assoc($res)) {	
	echo "id: " 	. $dados['id'] 		. '<br>';
	echo "nome: " 	. $dados['nome'] 	. '<br>';
	echo "email: " 	. $dados['email'] 	. '<br><br>';		
}

// encerra a conexão
mysqli_close($conn);
~~~


# escrita com mysqli
~~~php
// abre conexão com o mysql
$conn = mysqli_connect('localhost', 'root', '', 'treinophp');

// insere um registro
$sql = "INSERT INTO usuarios (nome, email) VALUES ('Marieta', 'marieta@hotmail.com')";
mysqli_query($conn, $sql); 

// encerra a conexão
mysqli_close($conn);
~~~


# PHP PDO - consulta - usando fetch
~~~php
try {
	// instancia objeto PDO, conectando no mysql
	$conn = new PDO('mysql:host=localhost;port=80;dbname=treinophp', 'root', '');
	
	// executa uma instrução SQL
	$result = $conn->query("SELECT * FROM usuarios");
	if($result) {
		// percorre os resultados via fetch
		while($row = $result->fetch(PDO::FETCH_OBJ)) { // outras opções de fetch: FETCH_ASSOC, FETCH_NUM, FETCH_BOTH
			// exibe dados do objeto retornado
			echo "nome = " . $row->nome  . "<br>\n";				
			echo "nome = " . $row->email . "<br><br>\n";				
		}		
	}		
	// fecha a conexão
	$conn = null;
}
catch(PDOException $e) {
	// caso ocorra uma exceção, exibe na tela
	print("Erro! \n");
	die();
}
~~~	




# PHP PDO - escrita - usando fetch

~~~php
try {
	// instancia objeto PDO, conectando no mysql
	$conn = new PDO('mysql:host=localhos;port=80;dbname=treinophp', 'root', '');
	
	// executa uma instrução SQL
	//$conn->exec("INSERT INTO usuarios (nome, email) VALUES (Gumercinda, gugu@gmail.com)");
	
	// fecha a conexão
	$conn = null;
}
catch(PDOException $e) {
	// caso ocorra uma exceção, exibe na tela
	print("Erro! " . $e->getMessage() . "\n");
	die();
}
~~~

# PHP PDO - consulta - usando foreach
~~~php
try {
	// instancia objeto PDO, conectando no mysql
	$conn = new PDO('mysql:host=localhost;port=80;dbname=treinophp', 'root', '');
	
	// executa uma instrução SQL
	$result = $conn->query("SELECT * FROM usuarios ORDER BY nome");
	if($result) {
		// percorre os resultados via fetch
		foreach($result as $row) {
			// exibe dados do objeto retornado
			echo "nome = " . $row['nome']  . "<br>\n";				
			echo "nome = " . $row['email'] . "<br><br>\n";				
		}		
	}		
	// fecha a conexão
	$conn = null;
}
catch(PDOException $e) {
	// caso ocorra uma exceção, exibe na tela
	print("Erro! \n");
	die();
}
~~~







