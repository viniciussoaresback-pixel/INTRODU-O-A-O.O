#include <iostream> 
#include <string>

using namespace std;

class Conta { // classe
private: // encapsulamento 
      int numeroConta;
     string titular;
     double saldo;  
    
public: 
     // Construtor
     Conta(int numero, string nome, double saldoInicial) {
        numeroConta = numero;
        titular = nome;
        saldo = saldoInicial;
     }
} 