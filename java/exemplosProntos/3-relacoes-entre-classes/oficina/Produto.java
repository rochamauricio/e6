public class Produto {
	private int codigo;
	private String descricao;
	private float valor;
	
	public Produto() {
		super();
	}
	
	public Produto( int codigo, String descricao, float valor ) {
		this.codigo = codigo;
		this.descricao = descricao;
		this.valor = valor;
	}
	
	public String toString() {
		return "Código do produto: " + codigo + " Descricao: " + descricao + " Valor: " + valor;
	}
	
	//getters
	public int getCodigo() {
		return codigo;		
	}
	
	public String getDescricao() {
		return descricao;
	}
	
	public float getValor() {
		return valor;
	}	
}
