    01 public class Teste {
    02     public static void main(String[] args) {
    03         Veiculo jipe = new Jipe();
    04         Veiculo jegue = new Jegue();
    05         Manobrista manobrista = new Manobrista();
    06         manobrista.estacionar(jipe);
    07         manobrista.estacionar(jegue);
    08     }
    09 }
