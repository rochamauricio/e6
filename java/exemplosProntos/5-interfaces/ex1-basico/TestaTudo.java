public class TestaTudo {
	public static void main( String[] args ) {
		Fatura f = new Fatura();
		Empregado e = new Empregado();
		
		System.out.println( f.getQuantidadeAPagar() );
		System.out.println( e.getQuantidadeAPagar() );

	}
}
