//librerias
#include <iostream>

//sublibrerias
using std::cout;
using std::cin;
using std::endl;

//metodo principal
int main(){
    //declaración de variables
    int entero1, entero2, resultado;
    //datos de entrada
    cout << "Introduce el primer numero: \n";
    cin >> entero1;
    cout << "Introduce el segundo numero:" << endl;
    cin >> entero2;
    //proceso
    resultado = entero1 + entero2;
    //datos de salida
    cout << "La suma de tus dos numeros es: "<< resultado;
}
