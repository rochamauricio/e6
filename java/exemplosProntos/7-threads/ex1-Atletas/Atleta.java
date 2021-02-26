public class Atleta implements Runnable {

	private char nomeEquipe;

	public int getNomeEquipe() {
		return nomeEquipe;
	}

	public void setNomeEquipe(char nomeEquipe) {
		this.nomeEquipe = nomeEquipe;
	}

	@Override
	public void run() {
		for (int i = 0; i < 500; i++) {
			System.out.println("Equipe " + nomeEquipe + " Atleta nº " + i);
			
			try {
				Thread.sleep(5);
			} catch(InterruptedException e) {
				e.printStackTrace();		
			}
		}
	}
}


