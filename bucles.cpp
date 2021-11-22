#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int numero;
    
    cout << "Que tabla deseas visualizar?";
    cin >> numero;
    for(int x=1; x<=10; x++){
     cout<< numero << "x" <<  x << "=" << x*numero << endl;
    }

    return 0;
}