import java.util.Scanner;

public class Classe {

	public static void main(String[] args) {

	String nome;
	int idade;

	Scanner scanner = new Scanner(System.in);

	System.out.println("Digite o seu nome:");
	nome = scanner.nextLine();

	System.out.println("Digite a sua idade: ");
	idade = scanner.nextInt();

	System.out.println( "\nBom dia " + nome + "\nVoce tem: " + idade + " anos." );

	scanner.close();
	}
} 
