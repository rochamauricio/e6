<?php // links ?>

http://php.net/manual/pt_BR/  				<? // documentação do php ?>
https://www.w3schools.com/php/default.asp  	<? // guia muito bom ?>
http://www.writephponline.com/				<? // php online editor ?>				
http://br.phptherightway.com/				<? // guia muito bom ?>

<?php

********************************************************************************************** Introducao

// tipo objeto
class Pessoa {
	public $nome;
	function dizerOla() {
		echo "Ola, me chamo {$this->nome}";
	}
}
$objeto = new Pessoa;
$objeto->nome = "Mauricio";
$objeto->dizerOla(); 



// funcoes para manipular objetos
$vetor = get_class_methods('Pessoa'); 	// obtem todos os metodos da classe 'Pessoa'
$vetor = get_class_vars('Pessoa'); 		// retorna vetor com nomes das variaveis e valores estaticos de inicializ da classe 'Pessoa'
$vetor = get_object_vars($objeto);		// retorna um vetor com os nomes e conteudos de todas propriedades de um objeto
$uma_string = get_class($objeto);		// retorna string com o nome da classe que o objeto pertence
$uma_string = get_parent?_class($obj);	// retorna o nome da classe pai do objeto, da string ou da classe
$bool = is_subclass_of($obj,'umaClass');// retorna true se o objeto pertencer a classe 
$bool = method_exists($obj,'metodo');	// retorna true se objeto possui o metodo 
call_user_func(array($obj, 'metodo'));	// executa o metodo da classe



?>










