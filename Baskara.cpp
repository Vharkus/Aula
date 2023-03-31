//Liga��o com uma biblioteca. Iostream permite a entrada e sa�da de informa��o.
#include <iostream>
//Segunda biblioteca, agora voltada para calculos matematicos. Sem ela codigos como sqrt n�o funcionam.
#include <cmath>
using namespace std;
//Come�o do c�digo. � necess�rio usar para o funcionamento do c�digo.
int main() {
    //Declara��o das variaveis.
   float a, b, c, x1, x2, delta;
   
   //Interface do usuario.
   cout << "Digite o valor de a: ";
   //Recebe a informa��o do usuario.
   cin >> a;
   //Segunda interface do usuario.
   cout << "Digite o valor de b: ";
   //Recebe a informa��o referente a a interface anterior.
   cin >> b;
   //Terceira interface do usuario.
   cout << "Digite o valor de c: ";
   //Recebe as informa��es da interface anterior.
   cin >> c;
   
   //Equa��o do delta. Pow permite a B elevado a 2 funcionar.
   delta = pow(b, 2) - 4 * a * c;
   
   //Condi��o onde o delta precisa, obrigat�oriamente, ser 0 ou maior para dar as respotas relacionadas.
   if (delta >=0) {
       //Equa��o que da a raiz positiva.
       x1 = (-b + sqrt(delta)) / (2 * a);
       //Equa��o que da a raiz negativa
       x2 = (-b - sqrt(delta)) / (2 * a);
       
       //Quarta interface do usuario, ela da as respostas finais caso os numeros tenham raizes.
       cout << "As raizes da equa��o s�o: " << x1 << " e " << x2 << endl;
   }
   //Interface do usuario que vai aparecer caso as escolhas de numeros n�o tenham raiz exata, ou seja, delta menor que 0.
   else {
       //Interface que aparece caso o delta seja menor que 0
       cout << "A equa��o n�o tem raizes reais" << endl;
   }
   
    return 0;
}