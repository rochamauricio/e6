# links 

https://www.w3schools.com/python/

# anotações

>  extensão arquivos python: .py

# comandos no Shell

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

## comentarios

~~~python

# comentario de uma linha

"""
comentarios de várias linhas
"""

'''
comentarios de várias linhas
'''
~~~

## caracteres de escape

~~~python
\n
~~~

# comandos de saida

~~~python
print("texto")
print(90 + 10)
print(nome)      
print("bom" + "Dia")
print("mauricio" * 3)              # repete mauricio 3 vezes
print("Idade:", 28, "Ano:", 2020)  # printa com parenteses
print "Idade:", 28, "Ano:", 2020   # printa sem parenteses
print("bem vindo " + nome)
print "Bom dia", nome, "ano", ano  # insere espacos
~~~

# comandos de entrada

~~~python
x = input("seu nome ")        # no python 3 - captura uma string sempre
x = raw_input("seu nome ")    # no python 2 - captura uma string sempre
~~~

# divisao inteira

~~~python
print(18/4)    # == 4
print(18/4.0)  # == 4.5
print(18//4.0) # == 4.0 força a divisão inteira
~~~

# operadores aritmeticos

~~~python
** # x=2**3 faz 2 ^ 3
// # divisão inteira
%  # resto da divisão inteira
/  # resultado == float
+  # soma ou concatena
~~~

# operadores relacionais
> ==  !=  >=  >  <=  <


# tipos de dados

> para declarar uma variável, você só precisa dar a ela algum valor
> ex.: idade = 30

~~~python
x = 2     # int
x = 2.1   # float
x = True  # bool: True ou False
~~~


# comparando strings

~~~python
print "casa" < "escola"   # printa True (casa vem antes no dicionário)
print "casa" == "escola"  # printa False
~~~



# funcoes uteis

~~~python
int()      # converte string ou float em inteiro, ex: x = int(7.5) -> irá truncar
float()    # converte string ou float em float, ex: x = int(7)
str()      # converte qualquer valor em string, ex: x = str(x)
bool()     # converte string ou numero em booleano -> 0 ou "" vira False. O resto é True
sum()      # soma elementos de uma lista, ex: sum([10, 20, 30])
max()      # retorna o maior valor de uma lista ou dos argumentos passados, ex: max(10, 2, 4, 100)
min()      # retorna o menor valor de uma lista ou dos argumentos passados
round()    # arredonda numero, ex: round(12.3945, 1) vai retornar 12.4
len()      # devolve o tamanho da string ou o da lista, ex: print len(minhaLista)
eval()     # avalia o valor da expressão argumento
~~~

# listas 

> podem ter dados de varios tipos juntos e até outras listas

~~~python
alunos = []                            # cria uma lista vazia
valores = [1, 2, 3, 4]                 # cria uma lista com inteiros
nomes = ["Mauricio", "Maria", "Jose"]  # print(nomes) vai printar nomes com colchetes

alunos.append("Marieta")               # insere string
alunos.append(nome)                    # insere variavel

nomes.pop()                            # remove o ultimo elemento da lista
nomes.pop(1)                           # remove o elemento de indice 1 da lista
nomes.remove("Mauricio")               # remove pelo valor do elemento
del nomes[0]                           # comando para deletar elemento da lista - apaga variáveis quaisquer

nomes.insert(1, "Jesus")               # insere Jesus na posição 1

nomes.reverse()                        # inverte ordem da lista
nomes.sort()                           # ordena elementos em ordem alfabetica / numerica

nomes.count("Mauricio")                # conta quantas vezes mauricio aparece na lista

print(nomes)                           # printa lista
print nomes[0]                         # printa primeiro elemento da lista
print "Mauricio" in nomes              # printa true se "Mauricio" pertencer à lista nomes - in é um operador!
~~~

# comando if

~~~python
if i >= 6:
  print "aprovado"
else:
  print "reprovado"
~~~




# exemplos

> verifica se numero eh par
~~~python
x = raw_input("Digite um numero ")
x = int(x) # ou x = int(raw_input("Digite um numero "))

if x % 2 == 0:
  print "O numero e par meu amor"
else:
  print "O numero e impar meu bem"
~~~


# exercícios

- criar a tabuada de um numero digitado
- exercicios uri


# tarefas

  instalar a versão 3 do python
  usar o google colab

  analisar dados: pandas
  ler ia: skit learn
  numpy
  mathplot

  ricardo enviou - ler PDFs:
    https://colab.research.google.com/drive/1VLpWnbukrw9OgIvuBFtmDSOTZO4Mmkl_?usp=sharing

# parei em

- apostila: parei em 12.2










