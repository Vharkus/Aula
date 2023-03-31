//Ligação com uma biblioteca. Iostream permite a entrada e saída de informação.
#include <iostream>
using namespace std;
//Começo do código. É necessário usar para o funcionamento do código.
int main() {
    //Declaração das variaveis para o código.
   float raio, area;
    //Variavel constante, ou seja, o valor não muda.
   const float PI = 3.14159;
    //Interface do usuário
   cout << "Digite o raio do circulo: ";
   //Recebe o valor que o usuario escolheu para a variavel em questão.
   cin >> raio;
   
   //Equação utilizada.
   area = PI * raio * raio;
   
   //Interface que mostra o resultado final.
   cout << "A area do circulo é: " << area << endl;
    return 0;
}