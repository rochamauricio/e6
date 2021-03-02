	#rodar o ngrok:
	# ./ngrok http 80  #(de qualquer lugar)



#Rodando o php na maquina pessoal de 2 modos diferentes:

	#Método 1: Utilizando o Xampp:
	
		#Instalar o Xampp: 			
			# https://www.youtube.com/watch?v=SL1pnztnm68
			
		#resolve problema para abrir phpmyadmin:
			# https://medium.com/@kivaimuinde/resolve-opt-lampp-bin-mysql-server-264-kill-no-such-process-3a62d2331349
			#comandos:
			# service mysql stop 			#digita senhas de usuario
			# sudo /opt/lampp/lampp start

			
			
		#Iniciar o Xampp:
			# cd /opt/lampp/		#essa pasta lampp é a que contem os arquivos do xampp
			# sudo ./lampp start	#esse arq lampp é um link ou sudo ./opt/lampp/lampp start
			
		#Parar o Xampp:
			# cd /opt/lampp/
			# sudo ./lampp stop						

		#Diretório com os arquivos de projetos:
			# cd /opt/lampp/htdocs

		# Exemplo cd /opt/lampp/htdocs/teste1
			#Abra no navegador			
				# http://localhost/teste1/
				
		# Adicional: Usando o WordPress:
			# https://www.youtube.com/watch?v=nsabEf92oG8
			# abrir o wordpress: http://localhost/seak1/wp-admin/
		


	#Método 2: Utilizando Apache2
		#Primeiramente Instalamos o LAMP: Linux Apache MySQL PHP - É uma pilha de softwares para Linux (p/ windows é o WAMP)
			# sudo apt-get update 				#para atualizar repositorio
			# sudo apt-get install lamp-server^
			# sudo chmod -R 777 /var/www  		#para dar permissão para qualquer usuário
			
		# Iniciar o Apache2:	sudo /etc/init.d/apache2 start
		# Parar o Apache2: 		sudo /etc/init.d/apache2 stop
		# Reinic o Apache2: 	sudo /etc/init.d/apache2 restart

		# Iniciar o mysql: 		sudo /etc/init.d/mysql start
		# Parar o mysql: 		sudo /etc/init.d/mysql stop
		# Reinic o mysql:		sudo /etc/init.d/mysql restart
		
		# Parar inicialização automática do apache2: 	sudo update-rc.d apache2 disable

		# cd /var/www/html	#nesse diretório ficarão os diretórios dos seus projetos
