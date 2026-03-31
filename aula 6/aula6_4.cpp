// aula 6 exercicio 4
#include <iostream>
using namespace std;
int main() {
    char continua;
    continua = 's';

    while (continua == 's') { // enquanto for igual 's' desafio1
        // comandos a serem repetidos
        cout << "Repetindo.... \n";
        cout << "Tecle 's' se deseja continuar ou outra tecla ";
        cout << "para parar\n";
        cin >> continua;
    }
}