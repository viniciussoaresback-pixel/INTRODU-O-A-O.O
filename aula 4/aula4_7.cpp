#include <iostream>
using namespace std;
int main(){ 
    int x =35,y = 2, z = 0;
    cout << "o valor de x = " << x << "\n";
    cout << "o valor de y = " << Y << "\n";
    cout << "troquei valores\n";
    z = y;
    y = x;
    x = z;
    cout << "o valor de x = " << x << "\n";
    cout << "o valor de y = " << y << "\n";
    x = x * -1; // trocando valores através de calculo
    cout << "o valor de x negativo = " << x << "\n";
    return 0
}