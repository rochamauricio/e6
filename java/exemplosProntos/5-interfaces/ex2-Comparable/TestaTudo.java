public class TestaTudo {
	public static void main( String[] args ) {

		// criando vetor de empregados 
		Comparable [] v = new Empregado[ 4 ];
		v[ 0 ] = new Empregado( 4, "Maria" );
		v[ 1 ] = new Empregado( 3, "Lucas" );
		v[ 2 ] = new Empregado( 1, "João" );
		v[ 3 ] = new Empregado( 2, "Paulo" );
		
		for( int i = 0; i < v.length; i++ )
			System.out.println( v[ i ] );
			
		System.out.printf( "\nOrdenando o vetor:\n\n" );

		// usando método estático que criei neste mesmo arquivo
		//ordenarSelecao( v, v.length );
		
		for( int i = 0; i < v.length; i++ )
			System.out.println( v[ i ] );		
	}
	
	// eu nao sabia mas da pra inserir metodos aqui :P - selectionSort - não é uma boa prática, não faça isso!
	public static void ordenarSelecao( Comparable[] v, int tamVetor) {
		for( int i = 0; i < tamVetor - 2; i++ ) {
			int min = i;
			for( int j = i + 1; j <= tamVetor-1; j++ )
				if( v[ j ].compareTo( v[ min ] ) < 0 )  // aqui usa o metodo compareTo implementado 
					min = j; // recebe o índice do menor vetor
			Comparable aux = v[ min ];
			v[ min ] = v[ i ];
			v[ i ] = aux;
		} 
	}
}
