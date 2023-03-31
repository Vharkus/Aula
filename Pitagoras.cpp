//Ligação com uma biblioteca. Iostream permite a entrada e saída de informação.
#include <iostream>
//Biblioteca focada em operações matematicas.
#include <cmath>
using namespace std;
//Começo do código. É necessário usar para o funcionamento do código.
int main() {
    //Declaração das variaveis.
   float catetoA, catetoB, hipotenusa;
   
   //Interface do usuario.
   cout << "Digite o valor do catetoA: ";
   //Recebe a informação do usuario.
   cin >> catetoA;
   //Segunda interface do usuario.
   cout << "Digite o valor do catetoB: ";
   //Recebe a informação referente a a interface anterior.
   cin >> catetoB;
   
   //Equação feita para encontrar a raiz quadrada da hipotenusa. Uso do cmath.
   hipotenusa = sqrt (pow(catetoA,2) + pow (catetoB, 2));
 
   
   
   //Interface que dara a resposta
   cout << "O valor da hipotenusa é: " << hipotenusa << endl;
   
    return 0;
}