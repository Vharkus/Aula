//Liga��o com uma biblioteca. Iostream permite a entrada e sa�da de informa��o.
#include <iostream>
using namespace std;
//Come�o do c�digo. � necess�rio usar para o funcionamento do c�digo.
int main() {
    //Declara��o das variaveis.
   float base, altura, area;
   
   //Interface do usuario.
   cout << "Digite a base do retangulo: ";
   //Recebe a informa��o do usuario.
   cin >> base;
   //Segunda interface do usuario.
   cout << "Digite a altura do retangulo: ";
   //Recebe a informa��o referente a a interface anterior.
   cin >> altura;
   
   //Equa��o para achar a area do retangulo.
   area = base * altura;
   
   //Interface que dara a resposta
   cout << "A area do retangulo �: " << area << endl;
   
    return 0;
}