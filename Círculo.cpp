//Liga��o com uma biblioteca. Iostream permite a entrada e sa�da de informa��o.
#include <iostream>
using namespace std;
//Come�o do c�digo. � necess�rio usar para o funcionamento do c�digo.
int main() {
    //Declara��o das variaveis para o c�digo.
   float raio, area;
    //Variavel constante, ou seja, o valor n�o muda.
   const float PI = 3.14159;
    //Interface do usu�rio
   cout << "Digite o raio do circulo: ";
   //Recebe o valor que o usuario escolheu para a variavel em quest�o.
   cin >> raio;
   
   //Equa��o utilizada.
   area = PI * raio * raio;
   
   //Interface que mostra o resultado final.
   cout << "A area do circulo �: " << area << endl;
    return 0;
}