package Controle;

import Utilidades.Data; 

public class Conta
{
	private int nroConta;
	private double saldo;
	private Data dataAbertura;				// Classe Data está no pacote Utilidades, precisamos importá-lo acima // Obs: se fizermos um get da data de abertura precisamos cuidar para não retornar a referência, precisamos fazer um clone!  
	private Cliente [] Clientes; 	// vetor de Clientes
	
	// pelo diagrama de classes lê-se: "uma conta tem uma data", tem "um ou mais Clientes"
	// tem uma data e 1 ou mais Clientes (ambos por agregação) - Uma conta pode ter mais de um Cliente (conta conjunta)
	
	
	public Conta( int nroConta, Cliente [] Clientes, Data dataAbertura, double monto )
	{
		this.nroConta = nroConta;
		this.dataAbertura = dataAbertura;
		this.Clientes = Clientes;
		this.saldo = monto; 
	}
	
	public String toString()
	{
		String resposta = "Numero da Conta: " + nroConta + " Saldo: " + saldo + " Data de abertura: " + dataAbertura + " ";
		
		for( int i = 0; i  < Clientes.length; i++ )
		{
			resposta = resposta + " " + Clientes[ i ];
		}
		
		return resposta;
	}
	
	public boolean fazerDeposito( double monto )
	{
		if( monto >= 0 )
		{
			saldo = saldo + monto;
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public boolean fazerSaque( double monto )
	{
		if( saldo > monto )
		{
			saldo = saldo - monto;
			return true;		
		}
		else
		{
			return false;
		}
	}
	
	public double consultarSaldo()
	{
		return saldo;		
	}
	
	public boolean fazerTransferencia( Conta destino, double monto )
	{		
		if( this.fazerSaque( monto ) == true ) // this para usar o método do objeto que o contém
		{
			destino.fazerDeposito( monto );
			return true;
		}	
		else
		{
			return false;
		}
	}
}

















