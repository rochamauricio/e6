# apostila - python versão 3.7

# anotações
	extensão arquivos python: .py

# comandos no Shell:
~~~shell
	# versão
	python -V

	# executar python no terminal
	python
	>>> comandos aqui
	>>> exit() #sai do python

	# executar um programa:
	python nomePrograma.py			
~~~



# instruções do python

~~~python

"""
comentarios de várias linhas
"""

'''
comentarios de várias linhas
'''


# caracteres de escape
\n 
	
# comandos de saida
print("texto")
print(90 + 10)
print(variavel) 					# ou print variavel
print("bom" + "Dia") 				# concatena strings
print("mauricio" * 3)				# repete mauricio 3 vezes
print("Idade:", 28, "Ano:", 2020)	# printa com parenteses
print "Idade:", 28, "Ano:", 2020	# printa sem parenteses
print "Bom dia", nome, "ano", ano	# concatena string e variaveis também (acrescenta espaço sozinho)


# comandos de entrada
x = input("seu nome ") 		# so funciona corretamente no Python 3 - captura SEMPRE uma string
x = raw_input("seu nome ")	# funcina no Python 2 - captura SEMPRE uma string


# divisao inteira
print(18/4)		# == 4
print(18/4.0)	# == 4.5
print(18//4.0)	# == 4.0 força a divisão inteira


# operadores aritmeticos aritimetica
** # x=2**3 faz 2 ^ 3
// # divisão inteira
%  # resto da divisão inteira
/  # resultado == float
+  # soma ou concatena


# operadores relacionais
==	!=	>=	>	<=	<


# tipos de dados
x = 2 		# int
x = 2.1		# float
x = True	# bool: True ou False


# variaveis: Para declarar [criar] uma variável, você só precisa dar a ela algum valor
idade = 30
a, b = 1, 2	# a=1 e b=2


# comparando strings
print "casa" < "escola"		# printa True (casa vem antes no dicionário)
print "casa" == "escola"	# printa False


# comando if
if i >= 6:
	print "aprovado"
else:
	print "reprovado"


# funcoes uteis
int()		# converte string ou float em inteiro, ex: x = int(7.5) -> irá truncar
float()		# converte string ou float em float, ex: x = int(7)
str()		# converte qualquer valor em string, ex: x = str(x)
bool()		# converte string ou numero em booleano -> 0 ou "" vira False. O resto é True
sum()		# soma elementos de uma lista, ex: sum([10, 20, 30])
max()		# retorna o maior valor de uma lista ou dos argumentos passados, ex: max(10, 2, 4, 100)
min()		# retorna o menor valor de uma lista ou dos argumentos passados
round()		# arredonda numero, ex: round(12.3945, 1) vai retornar 12.4
len()		# devolve o tamanho da string ou o da lista, ex: print len(minhaLista)
eval()		# avalia o valor da expressão argumento


# listas - podem ter dados de varios tipos juntos e até outras listas
alunos = []								# cria uma lista vazia
valores = [1, 2, 3, 4]					# cria uma lista com inteiros
nomes = ["Mauricio", "Maria", "Jose"] 	# print(nomes) vai printar nomes com colchetes
nomes.append("Marieta")					# inclui "Marieta"
nomes.pop()								# remove o ultimo elemento da lista
nomes.pop(1)							# remove o elemento de indice 1 da lista
nomes.remove("Mauricio")				# remove pelo valor do elemento
del nomes[0]							# comando para deletar elemento da lista - apaga variáveis quaisquer
nomes.insert(1, "Jesus")				# insere Jesus na posição 1
nomes.reverse()							# inverte ordem da lista
nomes.sort()							# ordena elementos em ordem alfabetica / numerica
nomes.count("Mauricio")					# conta quantas vezes mauricio aparece na lista
print nomes[0]							# printa primeiro elemento da lista
print "Mauricio" in nomes				# printa true se "Mauricio" pertencer à lista nomes - in é um operador!

~~~


parei em 12.2
https://www.w3schools.com/python/
curso DIO python















############################# exemplinhos

# verifica se numero eh par
x = raw_input("Digite um numero ")
x = int(x) # ou x = int(raw_input("Digite um numero "))

if x % 2 == 0:
	print "O numero e par meu amor"
else:
	print "O numero e impar meu bem"













