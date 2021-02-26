public class Terrestre extends Transporte {
	private int numRodas;
	
	public Terrestre( int capacidade, int numRodas ) { // também tenho a var capacidade da classe mae!
		super( capacidade ); // chamo o construtor da classe mae!
		this.numRodas = numRodas;
	}
	
	@Override // usado para deixar explicito ao compilador que o metodo sobrescreve um metodo da sua classe mae
	public String toString() { // sobrescrevendo o metodo toString da classe Transporte
		return super.toString() + "\nNumero de rodas: " + numRodas;
	}
	
	public int getCapacidade() {
		return super.getCapacidade();	
	}
	
	public int getNumRodas() {
		return numRodas;
	}
}
