//Ligação com uma biblioteca. Iostream permite a entrada e saída de informação.
#include <iostream>
//Segunda biblioteca, agora voltada para calculos matematicos. Sem ela codigos como sqrt não funcionam.
#include <cmath>
using namespace std;
//Começo do código. É necessário usar para o funcionamento do código.
int main() {
    //Declaração das variaveis.
   float a, b, c, x1, x2, delta;
   
   //Interface do usuario.
   cout << "Digite o valor de a: ";
   //Recebe a informação do usuario.
   cin >> a;
   //Segunda interface do usuario.
   cout << "Digite o valor de b: ";
   //Recebe a informação referente a a interface anterior.
   cin >> b;
   //Terceira interface do usuario.
   cout << "Digite o valor de c: ";
   //Recebe as informações da interface anterior.
   cin >> c;
   
   //Equação do delta. Pow permite a B elevado a 2 funcionar.
   delta = pow(b, 2) - 4 * a * c;
   
   //Condição onde o delta precisa, obrigatóoriamente, ser 0 ou maior para dar as respotas relacionadas.
   if (delta >=0) {
       //Equação que da a raiz positiva.
       x1 = (-b + sqrt(delta)) / (2 * a);
       //Equação que da a raiz negativa
       x2 = (-b - sqrt(delta)) / (2 * a);
       
       //Quarta interface do usuario, ela da as respostas finais caso os numeros tenham raizes.
       cout << "As raizes da equação são: " << x1 << " e " << x2 << endl;
   }
   //Interface do usuario que vai aparecer caso as escolhas de numeros não tenham raiz exata, ou seja, delta menor que 0.
   else {
       //Interface que aparece caso o delta seja menor que 0
       cout << "A equação não tem raizes reais" << endl;
   }
   
    return 0;
}