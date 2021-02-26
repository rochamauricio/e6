public class Motorista {

    private int matricula;
    private string nome;

    public Motorista(){}

    public void dirigir(Onibus onibus){ // relação USA no parâmetro
        onibus.ligar();
        onibus.acelerar();
        onibus.virarDireita();
        onibus.frear();
    }
}
