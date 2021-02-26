package Controle;

import Utilidades.Data;

public class RegistroContas
{
	public static void main( String[] args )
	{
		Data d1 = new Data( 7, 4, 2017 );
		Data d2 = new Data( 15, 5, 2017 );
		Cliente c11 = new Cliente( "02122211188", "Mauricio" );
		Cliente c12 = new Cliente( "02111133302", "Joao" );
		Cliente c2 = new Cliente( "02124718907", "Mario" );
		Cliente [] listaClientes1 = new Cliente[ 2 ]; // cria vetor com 2 Clientes		
		listaClientes1[ 0 ] = c11;
		listaClientes1[ 1 ] = c12;
		Cliente [] listaClientes2 = new Cliente[ 1 ];
		listaClientes2[ 0 ] = c2;
		
		Conta conta1 = new ContaCorrente( 12345, listaClientes1, d1, 100, 0.15 );
		Conta conta2 = new ContaPoupanca( 67891, listaClientes2, d2, 2000  );
		
		conta1.fazerDeposito( 800 );
		System.out.println( conta1 );
		if( conta1.fazerSaque( 900 ) == true )
		{
			System.out.println( "Saque realizado" );
		}
		else
		{
			System.out.println( "Saldo insuficiente" );
		}
	
		System.out.println();
		
		System.out.println( conta1 );
		
		conta2.fazerDeposito( 700 );
		System.out.println( conta2 );


		
	}
}
