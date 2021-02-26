package Controle;

import Utilidades.Data;

public class ContaCorrente extends Conta // Classe Conta correnta é filha da classe Conta
{
	double taxaMovimentacao;
	
	public ContaCorrente( int nroConta, Cliente[] correntistas, Data dataAbertura, double monto, double taxaMovimentacao )
	{
		super( nroConta, correntistas, dataAbertura, monto ); // "super" chama o construtor da classe mãe Conta
		this.taxaMovimentacao = taxaMovimentacao;	
	}
	
	public boolean fazerDeposito( double monto ) 
	{
		boolean sucesso = super.fazerDeposito( monto - taxaMovimentacao ); // chama o método fazerDeposito da classe mãe Conta
		System.out.println( "Será cobrada uma taxa de: " + taxaMovimentacao );
		return sucesso;		
	}
	
	public boolean fazerSaque( double monto ) 
	{
		System.out.println( "Será cobrada uma taxa de: " + taxaMovimentacao + "caso exista saldo suficiente" );
		return super.fazerSaque( monto + taxaMovimentacao );
	}
}
