# resetar a configuração inicial
~~~shell    
    git config --global --unset user.name
    git config --global --unset user.nickname
~~~

# configuração inicial
~~~shell
    git config --global user.name "rochamauricio"
    git config --global user.nickname "rochamauricio"
    git config --global user.email "mauricio.mbr@gmail.com"
~~~


# exemplo 1: 
> criando um repositorio na minha máquina (repositório local) e inserindo os códigos no repositório remoto
~~~shell
    #crie um diretório na sua máquina e digite:
    git init
    
    #crie os arquivos do projeto e digite:
    git add *
    git commit -m "commit inicial"
   
    #criar um repositório no github e digite:
    git remote add origin https://github.com/rochamauricio/e6.git
    git push origin master
~~~


# exemplo 2: 
> clonando um repositorio remoto na minha maquina pessoal: 
~~~shell
    #navegue até um diretório e digite:
    git clone https://github.com/rochamauricio/e6.git 
~~~


# exemplo 3: 
> inserindo arquivos em um repositório remoto compartilhado:
~~~shell
    git pull origin master
    #realize as alterações nos arquivos e digite:
    git add *
    git commig -m "Ultimas alteracoes"
    git push origin master
~~~



# exemplo 4: 
> testando o conflito de merge:
> "um colega deu um git push antes de mim num arquivo que eu também editei."
> "quando eu der um git push haverá um conflito"

~~~shell
    # edite os arquivos e digite:   
    git add *
    git commit -m "inserindo receita pudim"
    git push origin master
    # aqui dará o erro de conflito, preciso integrar as mudanças remotas no meu repositório local
    git pull origin master 
    # git vai detectar os conflitos de merge e os arquivos em conflito. Resolver o conflito manualmente e salvar o arquivo!
    git add *
    git commit -m "resolvendo o conflito"
    git push origin master
~~~


# lista de comandos
~~~shell
    git config --list       # lista todas configurações do git 
    git init                # inicializa um repositório dentro do diretório na máquina pessoal, cria o arquivo oculto .git, cria a branch master 
    git add                 # move o arquivo de untracked para staged 
    git restore --staged    # remove o arquivo de staged 
    git commit              # integra os arquivos modificados ao repositório local e retorna os arquivos para o estado de unmodified 
    git status              # verifica o status de todos arquivos do repositório 
    git push                # "empurrar" publica em um servidor remoto os commits feitos localmente. 

    git branch                  # lista todas as branches do repositorio
    git branch nome-da-branch   # cria uma branch
    git checkout nome-da-branch # vai para a branch nome-da-branch
    git fetch                   # obter branches do repositorio remoto
    git merge                   # juntar branches com a master // resolução de conlfitos


    git remote add origin umaURL    # marca para onde serao enviados os arquivos // origin é apenas um apelido convencionado para nao precisarmos digitar todo o tempo https://... 
    git remote -v                   # lista todos repositórios remotos cadastrados
    git push origin master          # "empurra" (push) o código commitado no repositório local para o repositório remoto 
    git pull origin master          # "puxa" atualiza o nosso repositório local conforme o repositório remoto, usado quando da conflitos 

    git clone               # obtem um clone de um projeto que está no github (repositório remoto) na sua máquina. Já baixa como um repositório local 
    git log                 # mostra o histórico de alterações gravadas no repositório 
    


~~~


# teorias

	Git é um programa versionador de código criado por Linus Torwalds.
	GitHub é um servidor na nuvem que armazena os códigos. Há outros (GitLab, BitBucket, ...).

# estados de arquivos

- *untracked*
    - arquivo recém criado

- *tracked*
        - unmodified
        - modified
        - staged:   arquivo preparado para realizarmos o commit

> O git add move o arquivo de untracked para staged
> O git commit integra os arquivos modificados ao repositório local e retorna os arquivos para o estado de unmodified

# repositórios

- Repositório remoto: no servidor
- Repositório local: contém todos os arquivos commitados 

> Ambiente de trabalho > staged > Repositório local

## Links:
[Git](https://git-scm.com/docs)

[Ver](https://www.youtube.com/watch?v=BAmvmaKQklQ&list=PLh2Y_pKOa4Uf-cUQOVNGlz_GVHx8QYoE6)

[ver](https://www.youtube.com/watch?v=CGTsIz5t0eY)


# dúvidas

## Na primeira vez sigo este fluxo?
~~~shell

    # navego até o diretorio onde será o meu repositorio local

    git clone https://github.com/eslgastal/sibgrapi2021-webpage.git
    
    # realizo as modificações nos arquivos aqui ...
    
    # crio uma branch
    # git branch nome-da-branch
    # git checkout nome-da-branch

    git add *
    git commit -m "Descricao das alteracoes feitas"
    
    # pull
    # merge

    # so com versao que nao quebre o site
    git push origin master 
~~~

## Na segunda vez em diante eu sigo este fluxo?
~~~shell
    git pull origin master
    
    # realizo as modificações nos arquivos aqui ...

    #git branch nome-da-branch
    #git checkout nome-da-branch
    
    git add *
    git commit -m "Descricao das alteracoes feitas"
    git push origin master
~~~


## outras dúvidas

- Em que situações e com que frequência eu crio uma branch? A cada nova alteração?

- Fazer pequenos commits e um push uma vez só numa branch?

- exemplos do email do professor gastal:
    - 1) Colocar os três "cards" abaixo em Important Dates:
    - 2) Colocar logotipos do INF e UFRGS (em anexo) em um novo h2 chamado "Support", abaixo de "Our Sponsors";
    - 3) "Esconder" (comentar no HTML) as regiões do site onde ainda não temos conteúdo (Invited Speakers & Menus sem links)
    - 4) Colocar logotipo da SBC ...

- Dúvidas interface - ver print