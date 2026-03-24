#include <iostream>
using namespace std;

int main(){ 
    int x = 35, y = 2, z;

    cout << "Pedido original:\n";
    cout << "Hamburguer (x) = " << x << "\n";
    cout << "Batata (y) = " << y << "\n\n";

    cout << "O atendente vai trocar os pedidos 🍔🍟...\n";

    // troca usando "bandeja" (variável auxiliar)
    z = x; // coloca o hamburguer na bandeja
    x = y; // batata vai para o lugar do hamburguer
    y = z; // hamburguer sai da bandeja e vai para o lugar da batata

    cout << "\nPedido depois da troca:\n";
    cout << "Hamburguer (x) = " << x << "\n";
    cout << "Batata (y) = " << y << "\n";

    return 0;
}