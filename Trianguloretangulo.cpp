//Ligação com uma biblioteca. Iostream permite a entrada e saída de informação.
#include <iostream>
using namespace std;
//Começo do código. É necessário usar para o funcionamento do código.
int main() {
    //Declaração das variaveis.
   float catetoA, catetoB, area;
   
   //Interface do usuario.CatetoA = Altura
   cout << "Digite o valor do catetoA do triangulo retangulo: ";
   //Recebe a informação do usuario.
   cin >> catetoA;
   //Segunda interface do usuario. CatetoB = Base
   cout << "Digite o valor do catetoB do triangulo retangulo: ";
   //Recebe a informação referente a a interface anterior.
   cin >> catetoB;
   
   //Equação para achar a area do triangulo retangulo.
   area = (catetoA * catetoB) /2;
   
   //Interface que dara a resposta
   cout << "A area do traingulo retangulo é: " << area << endl;
   
    return 0;
}
