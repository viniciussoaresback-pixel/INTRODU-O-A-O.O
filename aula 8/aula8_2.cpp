#include <iostream> 
using namespace std;

void menu() {
    cout << "1-bermuda";
    cout << "2-chinelo";
    cout << "Digite sua opção";
} 

int valores(int op) {
    int valor;
    switch (op) {
        case 1:
            valor = 20.00;
            break;
            case 2:
            // desafio 1
            valor = 30.00;
            break;

            default:
            cout << "Não existe essa opção";
            break;
        };
        return valor;
}

int main() {
    int op,qtd;
    int valor_individual, total;
    menu();
    cin >> op;
    cout << "Digite a quantidade";
    cin >> qtd;
    valor_individual = valores(op);
    total = valor_individual * qtd;
    cout << "Valor a pagar " << total << endl;

    return 0;
}