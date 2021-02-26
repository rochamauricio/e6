import java.util.*; 

public class Principal {
	public static void main( String[] args ) {
		Cliente cliente1 = new Cliente( 100, "Lanchonete Salgado e Cia", "200.200.0002/20" );
		Produto p1 = new Produto( 110, "Milho", 4.00f);
		Produto p2 = new Produto( 220, "Arroz", 5.00f );
		Produto p3 = new Produto( 330, "Soja", 3.00f );
		NotaFiscal nota1 = new NotaFiscal( 1, new Date(), cliente1 );		
		ItemNotaFiscal itemNota1 = new ItemNotaFiscal( 1, 10, p1 );
		ItemNotaFiscal itemNota2 = new ItemNotaFiscal( 2, 20, p2 );  	
		
		// teste:
		nota1.inserirItem( itemNota1 );
		nota1.inserirItem( itemNota2 );
		
		System.out.println( nota1.resumo() );
		
	}
}
