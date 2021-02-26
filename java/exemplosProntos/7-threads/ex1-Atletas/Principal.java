public class Principal {
	public static void main(String[] args) {

		Atleta a1 = new Atleta();
		a1.setNomeEquipe('A');
		Atleta a2 = new Atleta();
		a2.setNomeEquipe('B');

		Thread t1 = new Thread(a1);
		t1.start();
		Thread t2 = new Thread(a2);
		t2.start();
	}
}


