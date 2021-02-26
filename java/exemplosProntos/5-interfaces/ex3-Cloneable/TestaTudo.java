public class TestaTudo {
	public static void main( String[] args ) {
		
		Data dataOriginal = new Data( 30, 4, 2020 ); 
		Conta c1 = new Conta( dataOriginal );	
		System.out.println( "\tData original: " + c1.getData() ); 
		
		
		Data temp;
		temp = c1.getData(); // o get passa uma referência para o objeto Data, o que permite a variável temp modificar a data livremente!
		temp.setData( 0, 0, 0 );
		System.out.println( "\tData modificada sem permissão: " + c1.getData() + "\n\n" ); 
		
		
		// agora vamos fazer do jeito certo!!
		dataOriginal.setData( 30, 4, 2020 );
		Conta c2 = new Conta( dataOriginal );				
		System.out.println( "\tNova data original: " + c2.getData() );
		
		
		// aqui ta o pulo do gato!
		temp = c2.getBomData();
		temp.setData( 0, 0, 0 );
		System.out.println( "\tTentei modificar a data sem permissão: " + c2.getData() );		
		
	}
}
