--------------------------------------------------------------------- // Criando e manipulando uma janela criada
<!DOCTYPE html>
<html><head><title>Treino JS</title> 
<script>
	janela = window.open("", "_blank", "width=250,height=250");
	janela.document.write("<head><title>Título da janela</title></head>");
	janela.document.write("<body style='background: black; color:white;'><h1>Aumente seu tênis!</h1><button onclick='self.close()'>Fechar</button></body>");
</script>
</head><body>
</body></html>


