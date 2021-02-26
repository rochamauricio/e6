package Controle;

import Utilidades.Data;

public class ContaPoupanca extends Conta
{
	public ContaPoupanca( int nroConta, Cliente[] correntistas, Data dataAbertura, double monto )
	{
		super( nroConta, correntistas, dataAbertura, monto );
	}
}
