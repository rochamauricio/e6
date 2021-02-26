import java.util.*; 

public class TestaTudo {
	public static void main( String[] args ) {

		// List é a interface mais genérica
		List<Empregado> v = new ArrayList<Empregado>(); //cria lista
		
		v.add( new Empregado( 1, "Maria" ) );
		v.add( new Empregado( 2, "Mariéti" ) );
		v.add( new Empregado( 3, "Bernadiona" ) );
		v.add( new Empregado( 4, "Doraviusa" ) );
		
		for( Empregado e: v )
			System.out.println( e );		
	}
}
