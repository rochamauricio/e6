public class ItemNotaFiscal {
	private int item;
	private int quantidade;
	private Produto produto;	

	public ItemNotaFiscal() {
		super();
	}		

	public ItemNotaFiscal( int item, int quantidade, Produto produto ) {
		this.item = item;
		this.quantidade = quantidade;
		this.produto = produto;
	}		

	public String toString() {
		return "Item: " + item + " Produto: " + produto.getDescricao() + " Quantidade: " + quantidade;
	}
	
	public void setItem( int item ) {
		this.item = item;
	}
	
	public int getItem() {
		return item;
	}
	
	public void setQuantidade( int quantidade ) {
		this.quantidade = quantidade;	
	}
	
	public int getQuantidade() {
		return quantidade;
	}
	
	public void setProduto( Produto produto ) {
		this.produto = produto;
	}

	public Produto getProduto() {
		return produto;
	}
}





