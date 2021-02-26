public class Conta
{
	private Data dataAbertura;
	
	public Conta( Data dataAbertura ) {
		this.dataAbertura = dataAbertura;
	}
	
	public Data getData() {
		return dataAbertura; // retorna uma referência ao objeto data
	}
	
	public Data getBomData() {
		return (Data) dataAbertura.clone(); // retorna uma cópia do objeto Data
	}

}
