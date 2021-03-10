# Links: 

[w3schools](https://www.w3schools.com/python/)

[docs.python](https://docs.python.org/pt-br/3/)

[ler PDFs - link Ricardo](https://colab.research.google.com/drive/1VLpWnbukrw9OgIvuBFtmDSOTZO4Mmkl_?usp=sharing)

# Anotações:

- Extensão arquivos python: .py

- Usos do Python:

  - Web:
    - Django, Flask, Pyramid, Tornado, ...
  
  - Desktop:
    - Tkinter, PyQT, Kivy

  - Ciência de dados:
    - SciPy, Pandas, IPython, ...

  - Inteligência Artificial:
    - Scikit Learn, ...


- Parei em: 19 pg 70


# Comandos no Shell:

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


# Comentários:

~~~python

# comentario de uma linha

"""
comentarios de várias linhas
"""

'''
comentarios de várias linhas
'''
~~~

# Operadores e caracteres de escape:

~~~python
"""
Operadores aritmeticos:
  **  // (divisao inteira)    %    *    /    +    -

Operadores relacionais:
  >    ==     !=    >=    >    <=    <

Caracteres de escape:
  \n \t \\ \" \' \v
"""
~~~

# Tipos de dados:

> para declarar uma variável, você só precisa dar a ela algum valor

~~~python
x = 2     # int
x = 2.1   # float
x = True  # bool: True ou False
~~~

# Comandos de entrada:

~~~python
x = input("seu nome ")        # no python 3 - captura uma string sempre
x = raw_input("seu nome ")    # no python 2 - captura uma string sempre
a = int(input())
~~~

# Comandos de saída:

> %f, %i

~~~python
print("bem vindo " + nome)            # so concatena string com string
print("valor = " + str(x))            # x inteiro 
print("valor = %i" %x)                # concatena string com o inteiro 
print("valor = %0.4f" %x)             # concatena string com o float 4 casas
print("mauricio" * 3)                 # repete mauricio 3 vezes
~~~

# Strings:

> format()

~~~python
print("x = {} y = {}".format(x, y))                 # format
print("MEDIA = {:.1f}".format(media))               # formata com 1 casa decimal
print("x = {soma} y = {sub}".format(soma=x, sub=y)) # outra forma
~~~

> Comparando Strings:

~~~python
print "casa" < "escola"   # printa True (casa vem antes no dicionário)
print "casa" == "escola"  # printa False
~~~



# Comando if:

~~~python
if i >= 6:
  print "aprovado"
else:
  print "reprovado"
~~~

# Comando for:

> for com range
~~~python
for i in range(1, 11):
  print(i)
~~~

> for com lista
~~~python
nomes = ["aa", "bb", "cc"]
for i in nomes:
  print("x = ", i)
~~~

# Comando while:

~~~python
i = 1
while i <= 10:
  print(i)
  i += 1
~~~

> Usando a cláusula else:
~~~python
i = 1
while i <= 10:
  print(i)
  i += 1
else:
  print("The End")
~~~

# Funções úteis:

~~~python
type(var)  # retorna tipo da var
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

# Strings:

# Listas 

> podem ter dados de varios tipos juntos e até outras listas
> podem ter listas aninhadas

~~~python
lista = []                     # cria lista vazia, outra forma: alunos = list()
lista = [1, 2, 3, 4]           # cria lista 
lista = ["Mauricio", "Maria"]  # cria lista
lista = list("abc")            # cria lista ['a', 'b', 'c']  
lista = range(0, 3)            # cria lista ['0', '1', '2']   

lista.clear()                  # limpa a lista

lista.append("Marieta")        # insere no fim da lista
lista.append(nome)             # insere variavel (ou outra lista) no fim da lista

lista.pop()                    # remove o ultimo elemento da lista
lista.pop(1)                   # remove o elemento de indice 1 da lista
lista.remove("Mauricio")       # remove pelo valor do elemento
del lista[0]                   # deleta elemento da lista - apaga qualquer variavel

lista.insert(1, "Jesus")       # insere Jesus na posição 1

lista.reverse()                # inverte ordem da lista
lista.sort()                   # ordena elementos em ordem alfabetica / numerica

lista.count("Mauricio")        # conta quantas vezes mauricio aparece na lista

print(lista)                   # printa lista
print lista[0]                 # printa primeiro elemento da lista
print "Mauricio" in lista      # printa true se "Mauricio" pertencer à lista lista - in é um operador!

lista = [[10, 20, 30], 4]      # lista aninhada lista[0][0] == 10
~~~

# Exercícios:

> Tabuada

~~~python
x = int(input("Digite um numero: "))
for i in range(0, 11):
  prod = x * i
  print("%i * %i = %i" %(i, x, prod) )
~~~

