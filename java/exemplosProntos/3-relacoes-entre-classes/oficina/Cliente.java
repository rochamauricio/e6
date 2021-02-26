public class Cliente {
	private int codigo;
	private String nome;
	private String cnpj; 
	
	public Cliente() {
		super();
	}
	
	public Cliente( int codigo, String nome, String cnpj ) {
		this.codigo = codigo;
		this.nome = nome;
		this.cnpj = cnpj;
	}
	
	public String toString() {
		return "Código do cliente:" + codigo + " Nome: " + nome + " CNPJ: " + cnpj;
	}

	public void setCodigo( int codigo ) {
		this.codigo = codigo;	
	}
	
	public int getCodigo() {
		return codigo;
	}	
	
	public void setNome( String nome ) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setCnpj( String cnpj ) {
		this.cnpj = cnpj;
	}
	
	public String getCnpj() {
		return cnpj;
	}
}
