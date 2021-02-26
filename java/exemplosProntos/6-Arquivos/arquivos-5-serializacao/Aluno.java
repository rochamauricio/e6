import java.io.Serializable;

public class Aluno implements Serializable {	// implementar a interface Serializable torna objetos da classe aluno serializáveis. Não há nenhum metodo nessa interface a ser implementado! Ela funciona como marcação apenas

	private String matricula;
	private String nome;
	private String endereco;
	private String telefone;

	public Aluno(String matricula, String nome) {
		this.matricula = matricula;
		this.nome = nome;
	}

	public String getMatricula() {
		return matricula;
	}

	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getEndereco() {
		return endereco;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

}
