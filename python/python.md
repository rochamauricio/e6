# links 

[w3schools](https://www.w3schools.com/python/)

[docs.python](https://docs.python.org/pt-br/3/)

# anotações

- Extensão arquivos python: .py
- Usos do Python
  - Web:
    - Django, Flask, Pyramid, Tornado, ...
  - Desktop:
    - Tkinter, PyQT, Kivy
  - Ciência de dados
    - SciPy, Pandas, IPython, ...


# comandos no Shell

~~~shell
  # versão 3
  python3 -V

  # executar python no terminal
  python3
  >>> comandos aqui
  >>> exit() # ou ctrl+d sai do python

  # executar um programa:
  python3 nomePrograma.py      
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

## print
> %f, %i

~~~python
print("bem vindo " + nome)  
print("valor = " + str(x))  # concatena string com o inteiro 
print("valor = %i" %x)      # concatena string com o inteiro 
print("valor = %0.4f" %x)   # concatena string com o float 4 casas
print("mauricio" * 3)       # repete mauricio 3 vezes
~~~

# comandos de entrada

~~~python
x = input("seu nome ")        # no python 3 - captura uma string sempre
x = raw_input("seu nome ")    # no python 2 - captura uma string sempre
a = int(input())
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
> podem ter listas aninhadas

~~~python
lista = []                             # cria lista vazia, outra forma: alunos = list()
lista = [1, 2, 3, 4]                   # cria lista 
lista = ["Mauricio", "Maria", "Jose"]  # cria lista
lista = list("abc")                    # cria lista ['a', 'b', 'c']  
lista = range(0, 3)                    # cria lista ['0', '1', '2']   

lista.append("Marieta")                # insere no fim da lista
lista.append(nome)                     # insere variavel (ou outra lista) no fim da lista

lista.pop()                            # remove o ultimo elemento da lista
lista.pop(1)                           # remove o elemento de indice 1 da lista
lista.remove("Mauricio")               # remove pelo valor do elemento
del lista[0]                           # deleta elemento da lista - apaga qualquer variavel

lista.insert(1, "Jesus")               # insere Jesus na posição 1

lista.reverse()                        # inverte ordem da lista
lista.sort()                           # ordena elementos em ordem alfabetica / numerica

lista.count("Mauricio")                # conta quantas vezes mauricio aparece na lista

print(lista)                           # printa lista
print lista[0]                         # printa primeiro elemento da lista
print "Mauricio" in lista              # printa true se "Mauricio" pertencer à lista lista - in é um operador!

lista = [[10, 20, 30], 4, 5, 6]        # lista aninhada lista[0][0] == 10
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

- apostila: parei em 14










