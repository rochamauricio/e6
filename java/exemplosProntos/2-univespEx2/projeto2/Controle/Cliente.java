package Controle;

public class Cliente
{
	private String cpf;
	private String nome;
	
	// Método construtor
	public Cliente( String cpf, String nome )
	{
		this.cpf = cpf;
		this.nome = nome;	
	}
	
	public String toString()
	{
		return "\ncpf: " + cpf+ " nome: " + nome;
	}
	
	public void setCpf( String cpf )
	{
		this.nome = nome;
	}
	
	public void setNome( String nome )
	{
		this.nome = nome;
	}
	
	public String getCpf()
	{
		return cpf;
	}
	
	public String getNome()
	{
		return nome;
	}

}
