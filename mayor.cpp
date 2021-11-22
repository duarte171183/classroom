#include <iostream>

using std::cout;
using std::cin;

int main (){
  int numero1 = 10, numero2 = 5, numero3 = 100;
  //Pedir dos numero al usuario y verificar toda sus igualdades
  //operadores relacionales o de igualdad
  // == igualdad
  // != diferente
  // < menor que
  // > mayor que
  // <= menor igual que
  // >= mayor igual que

  if(numero1 == numero2)
  {
      cout<< numero1 << "es igual al numero al " << numero2;
  }
  if(numero1 != numero2)
  {
      cout<< numero1 << "es diferente al numero al " << numero2;
  }

  return 0;
}