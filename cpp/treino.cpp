#include <iostream>

using std::cout;
using std::endl;

class Time   //Declarada fora da main
{
public:   //Especificador de acesso a membros
   Time();   //Fun��o construtor Time - inicializador de mem de dados.
   void setTime(int, int, int);   //Prot�tipos das fun��es membro
   void printTime();
private:   //Especificador de acesso a membros
   int hour;   //membros de dados - n�o inicializar aqui
   int minute;
   int second;
};

//Construtor de Time. Inicializa os membros de dados com zero
Time::Time()   //::Operador bin�rio de resolu��o de escopo
{  hour = minute = second = 0;
}

//Valida informa��es: set
void Time::setTime(int h, int m, int s)
{  hour = (h >=0 && h < 24) ? h : 0; //Usando operador condicional
   minute = (m >= 0 && m < 60) ? m : 0;
   second = (s >= 0 && s < 60) ? s : 0;
}

//Imprime a hora
void Time::printTime()
{  cout << hour << " : " << minute << " : " << second
        << endl;
}

//Programa para testar a classe Time
int main()
{  Time t;   //Instancia (cria) objeto t da classe Time

   cout << "Hora inicial" << endl;
   t.printTime();

   t.setTime(14, 25, 48);
   cout << "Hora modificada: " << endl;
   t.printTime();

   return 0;
}

