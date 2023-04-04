//Ligação com uma biblioteca. Iostream permite a entrada e saída de informação.
#include <iostream>
//Evita a repetição do "std::"
using namespace std;
//Começo do código. É necessário usar para o funcionamento do código.
int main() {
    //Declaração das variaveis.
   float base, altura, area;
   
   //Interface do usuario.
   cout << "Digite a base do retangulo: ";
   //Recebe a informação do usuario.
   cin >> base;
   //Segunda interface do usuario.
   cout << "Digite a altura do retangulo: ";
   //Recebe a informação referente a a interface anterior.
   cin >> altura;
   
   //Equação para achar a area do retangulo.
   area = base * altura;
   
   //Interface que dara a resposta
   cout << "A area do retangulo é: " << area << endl;
   
    return 0;
}
