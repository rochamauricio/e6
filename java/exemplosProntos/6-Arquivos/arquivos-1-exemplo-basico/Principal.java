import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.io.UnsupportedEncodingException;
public class Principal {
	public static void main(String[] args) throws FileNotFoundException, UnsupportedEncodingException {
		PrintWriter writer = new PrintWriter("arquivo.txt", "UTF-8");
		writer.println("Meu nome é: ");
		writer.println("Flávio Alves");
		writer.close();
	}
}
