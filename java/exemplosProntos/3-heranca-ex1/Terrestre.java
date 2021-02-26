public class Terrestre extends Transporte {
	private int numRodas;
	
	public Terrestre( int capacidade, int numRodas ) { // também tenho a var capacidade da classe mae!
		super( capacidade ); // chamo o construtor da classe mae!
		this.numRodas = numRodas;
	}
	
	public int getCapacidade() {
		return super.getCapacidade();	
	}
	
	public int getNumRodas() {
		return numRodas;
	}
}
