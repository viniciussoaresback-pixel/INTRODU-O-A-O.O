//aula 6 exercicio 4
#include <iostream>
using namespace std;
int main(){
    char continua;
    continua = 's';
    char continua1;
    continua1 = 'S';

    while (continua1 == 'S') { // enquanto for igual a 'S' desafio2
    // comandos a serem repetidos
       cout << "Repetindo....\n";
       cout << "Tecle 'S' se deseja continuar ou outra tecla";
       cout << "para parar\n";
       cin >> continua1;
    }

    while (continua == 's') { // enquanto for igual a 's' desafio1
    // comandos a serem repetidos
       cout << "Repetindo....\n";
       cout << "Tecle 's' se deseja continuar ou outra tecla";
       cout << "para parar\n";
       cin >> continua;
    }
}