#include <iostream>

#include "Matematica.h"
#include "Fisica.h"

using namespace std;

int main() {

    int opcao;

    do {
        cout << "\n====== FORMULAS ENEM ======\n";
        cout << "1 - Matematica\n";
        cout << "2 - Fisica\n";
        cout << "0 - Sair\n";

        cout << "Escolha: ";
        cin >> opcao;

        Formula* formula = nullptr;

        switch(opcao) {

            case 1:
                formula = new Matematica();
                break;

            case 2:
                formula = new Fisica();
                break;

            case 0:
                cout << "Encerrando...\n";
                break;

            default:
                cout << "Opcao invalida!\n";
        }

        if(formula != nullptr) {
            formula->calcular();
            delete formula;
        }

    } while(opcao != 0);

    return 0;
}