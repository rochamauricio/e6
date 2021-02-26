public class Empregado implements Comparable { // Comparable é uma interface conhecida!
	private int id;
	private String nome;
	
	public Empregado( int id, String nome )
	{
		this.id = id;
		this.nome = nome;
	}
	
	public String toString() {
		return "id: " + id + ", nome: " + nome;
	}

	public int getId() {
		return id;
	}	
		
	public String getNome() {
		return nome;
	}	

	//implementando o método compareTo da interface Comparable
	public int compareTo( Object obj ) {
		return this.id - ( ( Empregado ) obj ).getId();
	}
	
	
}	


