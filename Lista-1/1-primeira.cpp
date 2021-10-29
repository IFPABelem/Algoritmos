// Fazer um algoritmo para calcular a soma entre dois números.

#include <iostream>
#include <locale.h>
//using namespace std;

void valida_numero(int &opcao);

int main() {
   setlocale(LC_ALL, "Portuguese");

   int numero1 = 0, numero2 = 0, soma = 0;

   std::cout<<"===========soma dois números=============="<<std::endl;
   
   std::cout<<"Primeiro número: ";
   std::cin>>numero1;
   valida_numero(numero1);
   
   std::cout<<"Segundo número: ";
   std::cin>>numero2;
   valida_numero(numero1);

   soma = numero1 + numero2;

   std::cout<< numero1 << " + " << numero2 << " = " << soma << std::endl;
   
   system("Pause");
   return 0;
}


void valida_numero(int &opcao){
   while (!std::cin.good()){  
      std::cout<<"Por favor, Digite um número"<<std::endl;

      //clears the error flag
      std::cin.clear();

      //ignore non-number
      std::cin.ignore(INT8_MAX, '\n');

      system("Pause");
      system("cls");

      std::cout<<"Digite o numero: ";
      std::cin >> opcao;
   }
   
}