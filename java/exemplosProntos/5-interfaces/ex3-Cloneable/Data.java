public class Data implements Cloneable
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
	
	public Object clone() {
		try {
			return super.clone();
		} catch ( CloneNotSupportedException e ) {
			System.out.println( "Cloning not allowed." );
			return this;
		}
	}
	
	// método para mostrar as coisas
	public String toString()
	{	
		return dia+"/"+mes+"/"+ano;
	}
	
	
	public void setData( int dia, int mes, int ano ) {
		this.dia = dia;
		this.mes = mes;
		this.ano = ano;	
	}
}
