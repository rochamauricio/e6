package Controle;

import Utilidades.Data;

public class RegistroContas
{
	public static void main( String[] args )
	{
		Data d = new Data( 15, 04, 2020 );
		Correntista c1 = new Correntista( "02122211188", "Mauricio" );
		Correntista c2 = new Correntista( "02111133302", "Joao" );
		Correntista [] correntistas = new Correntista[ 2 ]; // cria vetor com 2 correntistas		
		correntistas[ 0 ] = c1;
		correntistas[ 1 ] = c2;
		Conta conta1 = new Conta( 12345, d, correntistas, 200 );
		
		System.out.println("Conta criada com sucesso:");
		System.out.println( conta1 ); // metodos toString trabalham aqui
		
		System.out.println();
		
		System.out.println("Realizamos um depósito de 300 reais:");
		conta1.fazerDeposito( 300 );
		System.out.println( conta1 );
		
		System.out.println();
		
		System.out.println("Realizamos um saque de 150 reais");
		conta1.fazerSaque( 150 );		
		System.out.println( conta1 );
		
		
		// criando uma segunda conta
		Data d2 = new Data( 17, 4, 2020 );
		Correntista c3 = new Correntista( "001224576", "Maria Bernadeti" );
		Correntista c4 = new Correntista( "001245648", "Vera verão" );
		Correntista [] correntistas2 = new Correntista[2];
		correntistas2[ 0 ] = c3;
		correntistas2[ 1 ] = c4;
		Conta conta2 = new Conta( 54321, d2, correntistas2, 200 );
		
		System.out.println();
		
		System.out.println( "Criamos uma segunda conta:" );				
		System.out.println( conta2 );
		
		System.out.println();
		System.out.println("Realizaremos uma transferência de 150 reais da conta 1 para a conta 2:");
		
		conta1.fazerTransferencia( conta2, 150 );	
		
		System.out.println();
		System.out.println();
		
		System.out.println( "Conta 1:" + conta1 );
		System.out.println();
		System.out.println( "Conta 2:" + conta2 );
		
		
		System.out.println();


		



		
		
	}
}
