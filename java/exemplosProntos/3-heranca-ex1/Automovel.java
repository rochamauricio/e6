public class Automovel extends Terrestre
{
	private String cor;
	private int numPortas;
	private String placa;
	
	public Automovel( int capacidade, int numRodas, String cor, int numPortas, String placa ) {
		super( capacidade, numRodas );
		this.cor = cor;
		this.numPortas = numPortas;
		this.placa = placa;
	}
	
	public String toString() {
		return "Capacidade: " + super.getCapacidade() + "\nNum de rodas: " + super.getNumRodas() + "\nCor: " + cor +
			   "\nNum de portas: " + numPortas + "\nPlaca: " + placa;
	}
	
	public int getCapacidade() {
		return super.getCapacidade();	
	}
	
	public int getNumRodas() {
		return super.getNumRodas();
	}
	
	
}
