#include <iostream>

using std::cout;
using std::ios;
using std::endl;

#include <iomanip>

using std:: setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

void shuffle(int [][13]);
void deal(const int [][13], const char *[], const char *[]);

int main()
{  const char *suit[4] = {"Copas", "Ouros", "Paus", "Espadas"};
   const char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
   int deck[4][13] = {0}; //Inicializado com zero

   srand(time(0)); //Obtem semente para rand()

   shuffle(deck);
   deal(deck, face, suit);

   return 0;
}

void shuffle(int wDeck[][13])
{  int row, column;

   for(int i = 1; i <= 52; i++)
   {  do
      {  row = rand()%4;
         column = rand()%13;
      }while (wDeck[row][column] != 0);
      wDeck[row][column] = i;
   }
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[])
{  for(int i = 1; i <=52; i++)
      for(int row = 0; row <=3; row++)
         for(int column = 0; column <= 12; column ++)
            if(wDeck[row][column] == i)
               cout << setw(7) << setiosflags(ios::right)
                    << wFace[column] << " de "
                    << setiosflags(ios::left)
                    << wSuit[row] << endl;
                    //<< (i % 2 == 0 ? '\n' : '\t');
}

