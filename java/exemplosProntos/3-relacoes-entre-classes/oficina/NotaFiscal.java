import java.util.*; 

public class NotaFiscal {
	private int codigo;
	private Date data;
	private Cliente cliente;
	List <ItemNotaFiscal> itens = new ArrayList<ItemNotaFiscal>();
	
	public NotaFiscal() {
		super();
	}

	public NotaFiscal( int codigo, Date data, Cliente cliente ) {
		this.codigo = codigo;
		this.data = data;
		this.cliente = cliente;
	}
	
	public float calcularValor() {
		float valorFinal = 0.0f;
		for( int i = 0; i < itens.size(); i++ ) 
			valorFinal += itens.get( i ).getQuantidade() * itens.get( i ).getProduto().getValor();
		return valorFinal; 
	}	
	
	public void inserirItem( ItemNotaFiscal itemNotaFiscal ) {
		itens.add( itemNotaFiscal );		
	}
	
	public String toString() {
		return "Código da nota Fiscal: " + codigo + ", Data: " + data.toString();
	}
	
	public String resumo() {
		String resumo = toString() + "\n";
		
		for( int i = 0; i < itens.size(); i++ ) {
			resumo += itens.get( i ).toString() + "\n";
		}
		
		resumo += "Valor da Nota Fiscal: " + calcularValor();
		
		return resumo;
	}
	
	
	// setters e getters
	public void setCodigo( int codigo ) {
		this.codigo = codigo;
	}
	
	public int getCodigo() {
		return codigo;
	}
	
	public void setData( Date data ) {
		this.data = data;
	}
	
	public Date getData() {
		return data;
	}
	
	public void setCliente( Cliente cliente ) {
		this.cliente = cliente;
	}

	public Cliente getCliente() {
		return cliente;
	}
	
}
