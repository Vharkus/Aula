//Liga��o com uma biblioteca. Iostream permite a entrada e sa�da de informa��o.
#include <iostream>
//Biblioteca focada em opera��es matematicas.
#include <cmath>
using namespace std;
//Come�o do c�digo. � necess�rio usar para o funcionamento do c�digo.
int main() {
    //Declara��o das variaveis.
   float catetoA, catetoB, hipotenusa;
   
   //Interface do usuario.
   cout << "Digite o valor do catetoA: ";
   //Recebe a informa��o do usuario.
   cin >> catetoA;
   //Segunda interface do usuario.
   cout << "Digite o valor do catetoB: ";
   //Recebe a informa��o referente a a interface anterior.
   cin >> catetoB;
   
   //Equa��o feita para encontrar a raiz quadrada da hipotenusa. Uso do cmath.
   hipotenusa = sqrt (pow(catetoA,2) + pow (catetoB, 2));
 
   
   
   //Interface que dara a resposta
   cout << "O valor da hipotenusa �: " << hipotenusa << endl;
   
    return 0;
}