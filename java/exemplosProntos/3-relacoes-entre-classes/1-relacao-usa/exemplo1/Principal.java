/*
No código Java a seguir, observaremos que, no método main() da classe Principal, há a criação de objetos das classes 
Onibus e Motorista. Logo, a classe Principal usa as classes Onibus e Motorista.
*/

public class Principal {
    public static void main(String[] args) {
        Onibus onibus = new Onibus();
        Motorista motorista = new Motorista();
        motorista.dirigir(onibus);
    }    
}
