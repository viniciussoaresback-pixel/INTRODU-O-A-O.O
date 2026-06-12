#include <iostream>
#include "Fisica.h"

using namespace std;

void Fisica::calcular() {
    double forca, massa, aceleracao;

    cout << "\n=== SEGUNDA LEI DE NEWTON ===\n";

    cout << "Digite a massa: ";
    cin >> massa;

    cout << "Digite a aceleracao: ";
    cin >> aceleracao;

    forca = massa * aceleracao;

    cout << "Forca Resultante: " << forca << " N" << endl;
}