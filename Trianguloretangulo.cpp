//Liga��o com uma biblioteca. Iostream permite a entrada e sa�da de informa��o.
#include <iostream>
using namespace std;
//Come�o do c�digo. � necess�rio usar para o funcionamento do c�digo.
int main() {
    //Declara��o das variaveis.
   float catetoA, catetoB, area;
   
   //Interface do usuario.
   cout << "Digite o valor do catetoA do triangulo retangulo: ";
   //Recebe a informa��o do usuario.
   cin >> catetoA;
   //Segunda interface do usuario.
   cout << "Digite o valor do catetoB do triangulo retangulo: ";
   //Recebe a informa��o referente a a interface anterior.
   cin >> catetoB;
   
   //Equa��o para achar a area do triangulo retangulo.
   area = (catetoA * catetoB) /2;
   
   //Interface que dara a resposta
   cout << "A area do traingulo retangulo �: " << area << endl;
   
    return 0;
}