public abstract class Empregado {
	private String primeiroNome;
	private String ultimoNome;
	protected double salario;
	
	public Empregado( String primeiroNome, String ultimoNome, double salario ) {}
	
	// Getters e setters suprimidos
	public abstract double calcularPagamento();
	public String imprimirCheckPagamento() {}
}
     
