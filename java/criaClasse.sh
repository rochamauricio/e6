#!/bin/bash

echo -n "Nome da classe: "

if test $1 -n; then
	read nomeClasse;
else
	nomeClasse=$1;
fi

#meléca pra concatenar ".java" na string
nomeArquivo=(${nomeClasse[*]}".java");
nomeArquivo=${nomeArquivo[*]};

echo -n "A classe tem o método main? (1 = sim, 0 = não, qualquer coisa = sim): ";
read temClasse;

#cria arquivo
touch $nomeArquivo

if [ $temClasse -eq 0 ]; then 	#esses espaços são todos obrigatórios
	#cria uma classe comum
	echo -e "public class $nomeClasse\n{\n\tSystem.out.println();\n}" >> $nomeArquivo; 
else	
	#classe main

	echo -e "public class $nomeClasse\n{" >> $nomeArquivo;
	echo -e "\tpublic static void main( String[] args )\n\t{" >> $nomeArquivo;
	echo -e "\t\tSystem.out.println();\n\t}\n}" >> $nomeArquivo;
fi


echo -e "Classe $nomeClasse foi criada com sucesso!";

gedit $nomeArquivo &
