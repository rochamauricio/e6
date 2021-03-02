# convertendo arquivos .md em .pdf com o pandoc
    pandoc -o markdown.pdf markdown.md

# header 1
## header 2
### header 3
#### header 4
##### header 5
###### header 6

**bold text**
*italic text*

<!-- Uma linha --><br>
- - - 


# links
[link para um tutorial](https://www.markdownguide.org/basic-syntax/)

# ancoras
[`umaAncora`](#umaAncora).

# listas não ordenada
- lista não ordenada
- lista não ordenada
    - lista não ordenada
        - lista não ordenada
- lista não ordenada

# listas ordenada
1. lista ordenada
1. lista ordenada
1. lista ordenada

# texto destacado
    Um texto em 
    destaque aqui

# citação em bloco
> uma citação 

# código numa linguagem - jeito 1
~~~c
    // um código em C
    int main() {
        x = 2;
    }
~~~

# código numa linguagem - jeito 2
```javascript
    // um código em JavaScript
    console.log("legal");
```

# imagens
![descricao da imagem](https://github.com/rochamauricio/e6/blob/master/markdown/img/tux.png)

# tabelas
| Nome | Curso | Formatura |
| :--- | --- | --- |
|Maurício Rocha| ECP | 2022|

# tabelas alinhamento
| Nomeeeeeee | Cursooooooo | Formaturaaaaaaa |
| :--- | ---: | :---: |
|esquerda| direita | centro|











