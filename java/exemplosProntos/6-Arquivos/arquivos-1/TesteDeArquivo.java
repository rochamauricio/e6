import java.io.File;

public class TesteDeArquivo {
	public static void main( String[] args ) {
		String enderecoArquivo = "/home/mauricio/cursos/lead/2-integr-aplic-pai/exemplos/arquivos/dados.txt"; // mudar conforme o diretório

		File arquivoAlvo = new File( enderecoArquivo );
		
		if( arquivoAlvo.exists() ) {
			System.out.println( "É arquivo? " + ( arquivoAlvo.isFile() ? "Sim" : "Não" ) );
			System.out.println( "O arquivo tem " + arquivoAlvo.length() + " bytes" );
			System.out.println( "Está dentro de " + arquivoAlvo.getParent() );		
		
		} else {
			System.out.println( "O arquivo não existe!" );	
		}	
	
	}
}
