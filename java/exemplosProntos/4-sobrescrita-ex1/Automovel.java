public class Automovel extends Terrestre {
	private String cor;
	private int numPortas;
	private String placa;
	
	public Automovel( int capacidade, int numRodas, String cor, int numPortas, String placa ) {
		super( capacidade, numRodas );
		this.cor = cor;
		this.numPortas = numPortas;
		this.placa = placa;
	}

	
	@Override	
	public String toString() { // sobrescrevendo o metodo toString da classe Terrestre
		return super.toString() + "\nCor: " + cor + "\nNumero de portas: " + numPortas + "\nPlaca: " + placa;
	}
	
	
	public int getCapacidade() {
		return super.getCapacidade();	
	}
	
	public int getNumRodas() {
		return super.getNumRodas();
	}	
	
}
