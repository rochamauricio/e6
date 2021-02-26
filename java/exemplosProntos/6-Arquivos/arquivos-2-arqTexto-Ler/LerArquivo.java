import java.io.*;

public class LerArquivo {
	public static void main( String[] args ) {
	
		try {
			File arquivo = new File( "/home/mauricio/cursos/lead/2-integr-aplic-pai/exemplos/arquivos-2-arqTexto/dados.txt" );
			BufferedReader bufferedReader = new BufferedReader( new FileReader( arquivo ) ); 
			String linha = null; 
			
			while( ( linha = bufferedReader.readLine() ) != null ) {  	//captura uma linha do arquivo. readLine devolve null ao chegar no fim do arquivo
				System.out.println(linha);
			}

			bufferedReader.close();
			
		} catch( IOException exception ) {
			System.err.println( "# Ocorreu um erro durante a leitura do arquivo." );	
			exception.printStackTrace();
		}		
	}
}
