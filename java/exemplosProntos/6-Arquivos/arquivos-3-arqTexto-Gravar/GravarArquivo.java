import java.io.*;
import javax.swing.JOptionPane;

public class GravarArquivo {

    public static void main(String[] args) {

        try{
            File arquivo = new File("/home/mauricio/cursos/lead/2-integr-aplic-pai/exemplos/arquivos-3-arqTexto-Gravar/dados.txt"); // se arquivo nao existe ele cria

            BufferedWriter bufferedWriter = new BufferedWriter( new FileWriter( arquivo, true ) ); // true == append, false == sobrescreve tudo (apaga o que tinha antes)
            String novoConteudo = "";

            novoConteudo = JOptionPane.showInputDialog( null, "Informe um texto" );

            bufferedWriter.write( System.getProperty( "line.separator" ) + novoConteudo );

			// Os métodos write(), flush() e close() vêm da classe Writer 
            bufferedWriter.flush(); //disparamos o fluxo de dados do buffer para o arquivo
            bufferedWriter.close();

        } catch (IOException exception) {
            System.out.println( "# Ocorreu um erro durante a gravacao do arquivo." );
            exception.printStackTrace();
        }
    }
}
