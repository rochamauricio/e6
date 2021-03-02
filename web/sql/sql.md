# alguns links:
	https://www.w3schools.com/sql/default.asp


# anotações
~~~sql

-- comentario de uma linha
/* comentário de várias linhas */


/* SELECT */
-- retorna um conjunto de linhas de uma ou mais tabelas do banco de dados
	SELECT <coluna1>, <coluna2> FROM <tabela1>, <tabela2> WHERE <condicoes> GROUP BY <coluna1>, <coluna2> HAVING <condicao> ORDER BY <colunaX>, <colunaY>

	-- exemplo:
	SELECT codigo, nome FROM famosos


/* INSERT */
-- insere uma ou mais linhas em uma tabela do banco de dados
	INSERT INTO <tabela> (<coluna1>, <coluna2>, <colunaN>) VALUES (<valor1>, <valor2>, <valorN>);
	
	-- exemplo
	INSERT INTO pessoas (codigo, nome) VALUES (123, 'Mauricio');


/* UPDATE */
-- altera os valores de colunas de uma ou mais linhas em uma tabela do banco de dados. Permite alterar vários valores ao mesmo tempo
	UPDATE <tabela> SET <coluna1> = <valor1>, <coluna2> = <valor2> WHERE <condicao>
	
	-- exemplo
	UPDATE produtos SET custo = custo * 1,2, venda = venda * 1,25 WHERE fornecedor = 10; -- atualiza os custos e valores de vendas para o fornecedor cujo código é 10


/* DELETE */
-- remove uma ou mais linhas de uma tabela do banco de dados
	DELETE FROM <tabela> WHERE <condicao>
	
	-- exemplo
	DELETE FROM produtos WHERE venda <= "0.5"; -- exclui todos produtos cujo valor de venda é menor que 0.5
~~~













