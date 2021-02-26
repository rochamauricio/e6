import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.EOFException;
import java.util.HashMap;
import java.util.Scanner;



public class CadastroAlunoSerial {
	private Scanner entrada;
	private final String enderecoArquivo = "/home/mauricio/java/exemplosProntos/6-Arquivos/arquivos-5-serializacao/alunos.ser";
	private File arquivo;
	private ObjectInputStream leitor;
	private ObjectOutputStream gravador;
	private HashMap<String, Aluno> alunos;

	public static void main(String[] args) throws ClassNotFoundException {
		CadastroAlunoSerial cadastro = new CadastroAlunoSerial();
		cadastro.iniciar();
	}

	public CadastroAlunoSerial() throws ClassNotFoundException {
		arquivo = new File(enderecoArquivo);
		System.out.println( arquivo );
		alunos = new HashMap<String, Aluno>();
		entrada = new Scanner(System.in);

		iniciar();
	}

	private void iniciar() throws ClassNotFoundException {
		int opcao = -1;
		try {

			lerArquivo();

			do {
				exibeMenu();
				opcao = opcaoUsuario();
				switch (opcao) {
					case 1: {
						exibirAlunos();
						break;
					}
					case 2: {
						novoAluno();
						break;
					}
					case 3: {
						removerAluno();
						break;
					}
					case 4: {
						break;
					}
					default: {
						System.out.println("Opção inexistente.");
						opcao = -1;
					}
				}

			} while (opcao != 4);
			finalizar();
		} catch (IOException exception) {
			System.out.println("Falha na manipulação do arquivo.");
		}
		System.out.println("Encerrando...");
		System.exit(0);
	}

	private void finalizar() throws IOException {
		System.out.println("Salvando dados no arquivo..");
		gravarArquivo();
	}

	private void exibeMenu() {
		System.out.println(":: Menu ::\n");
		System.out.println(" 1. Ver Alunos\n 2. " + "Adicionar Aluno\n 3. Remover Aluno\n 4. Sair");
		System.out.print(">> ");
	}

	private int opcaoUsuario() throws IOException {
		return entrada.nextInt();
	}

	private void exibirAlunos() {
		System.out.println("# Lista de Alunos\n");
		for (Aluno aluno : alunos.values()) {
			System.out.println("Matrícula: " + aluno.getMatricula());
			System.out.println("Nome: " + aluno.getNome());
			if (aluno.getEndereco() != null && !aluno.getEndereco().isEmpty()) {
				System.out.println("Endereço: " + aluno.getEndereco());
			}
			if (aluno.getTelefone() != null && !aluno.getTelefone().isEmpty()) {
				System.out.println("Telefone: " + aluno.getTelefone());
			}
			System.out.println();
		}
		System.out.println("-----------------------");
	}

	private void novoAluno() {
		System.out.println("Informe matricula, nome, endereco e telefone do aluno, separados por vírgula.");
		System.out.print("* Apenas matrícula e nome são obrigatórios. \n>>");
		entrada.nextLine();

		String dados = entrada.nextLine();
		String[] dadosAluno = dados.split(",");

		Aluno aluno = new Aluno(dadosAluno[0], dadosAluno[1]);
		if (dadosAluno.length >= 3) {
			aluno.setEndereco(dadosAluno[2]);
		}
		if (dadosAluno.length >= 4) {
			aluno.setTelefone(dadosAluno[3]);
		}

		alunos.put(aluno.getMatricula(), aluno);
	}

	private void removerAluno() {
		System.out.print("Informe matricula do aluno que deseja remover.\n>>");
		entrada.nextLine();

		String matricula = entrada.nextLine();

		if (alunos.containsKey(matricula)) {
			Aluno aluno = alunos.remove(matricula);
			System.out.println("Aluno " + aluno.getNome() + " removido...");
		} else {
			System.out.println("Matricula não encontrada...");
		}
	}


	private void lerArquivo() throws IOException, ClassNotFoundException {
		System.out.println( "Carregando dados do arquivo.." );
		leitor = new ObjectInputStream( new FileInputStream( arquivo ) );
		Aluno temp = null;
		try{
			while ( ( temp = ( Aluno ) leitor.readObject() ) != null ) { 	// readObject retorna uma instância do tipo Object. 
			  alunos.put( temp.getMatricula(), temp );
			}
		} catch( EOFException exception ){ 	//falha de final de arquivo,
			System.out.println("Arquivo de registros vazio.");
		} catch( Exception e ) {
			System.out.println("ClassNotFoundException.");
			e.printStackTrace();
		}
		leitor.close();
		leitor = null;
	}



	private void gravarArquivo() throws IOException {
	   if ( alunos != null ) {
		  gravador = new ObjectOutputStream( new FileOutputStream( arquivo, false ) );
		  for ( Aluno aluno : alunos.values() ) {
		     gravador.writeObject( aluno );
		  }
		  gravador.flush();
		  gravador.close();
		  gravador = null;
	   }
	}

}
