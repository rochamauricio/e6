/*

	O que será impresso quando executarmos o código?

*/

public class TempoCerto implements Runnable {

    long tempo = 10;

    public void run() {

        this.tempo = 11;

    }

    public static void main(String[] args) {

      TempoCerto tempoCerto = new TempoCerto();

      new Thread(tempoCerto).start();

        System.out.println(tempoCerto.tempo);

   }

}
