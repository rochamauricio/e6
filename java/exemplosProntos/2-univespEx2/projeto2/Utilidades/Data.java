package Utilidades;

public class Data
{
	// atributos da classe: são privados
	private int dia;
	private int mes;
	private int ano;
	
	// método construtor (sempre é publico e tem mesmo nome da classe)
	public Data( int dia, int mes, int ano )
	{
		this.dia = dia;	
		this.mes = mes;
		this.ano = ano;
	}
	
	// método para mostrar as coisas
	public String toString()
	{	
		return dia+"/"+mes+"/"+ano;
	}
	
	public void setData( int dia, int mes, int ano )
	{
		this.dia = dia;		
		this.mes = mes;		
		this.ano = ano;	
	}
	
	public int getDia()
	{
		return dia;
	}
	
	public int getMes()
	{
		return mes;
	}
	
	public int getAno()
	{
		return ano;
	}

}
