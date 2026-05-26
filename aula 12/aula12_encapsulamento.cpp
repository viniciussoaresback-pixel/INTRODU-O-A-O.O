#include <iostream> 
using namespace std;

/*
Encapsulamento
 - Esconder os dados internos da classe
 - Permitir o acesso aos dados apenas por meio de métodos públicos
 - titular e saldo são PRIVADOS
 - Só podem ser acessados pelos metodos públicos
 */

 class ContaBancaria {
    private: // encapsulamento
        string titular;
        double saldo;

    public: // encapsulamento 
        // constructor Inicializa o saldo da conta 
        ContaBancaria(){ //
            saldo = 0.0;
        }

        // setter - guardar
        void setTitular(string nome) {
            titular = nome;
        }
        // getter - buscar
        string getTitular() {
            return titular;
        }

        void depositar(double valor) {
            // validação - programação defensiva 
            if(valor > 0) {
                saldo += valor;
                cout << "Depósito realizado com sucesso!" << endl;        
            }
        }

        void sacar(double valor) {
            if(valor <= saldo) { // validação - programação defensiva
                saldo -= valor;
                cout << "Saque realizado com sucesso!" << endl;        
            } else {
                cout << "Saldo insuficiente!" << endl;
            }
        }

        double getSaldo() {
            return saldo;
        }
 };

 int main() {
    ContaBancaria conta; // criando o objeto 

    /* Forma correta usando sempre o metodo de busca: 
    conta.setTitular("João"); // usando o metodo de guardar

       Forma incorreta acessando a variavel
       sem o uso do metodo publico:
       conta.titular = "João"; // acesso direto - não recomendado
    */
    conta.setTitular("João"); // usando o metodo de guardar
    conta.depositar(1000.0); // depositando dinheiro
    cout << "Titular: " << conta.getTitular() << endl; // usando o metodo de busca
    cout << "Saldo: " << conta.getSaldo() << endl; // usando o metodo
    conta.depositar (500);
    cout << "Saldo: " << conta.getSaldo() << endl; // usando o metodo
    conta.sacar(200);
    cout << "Saldo: " << conta.getSaldo() << endl; // usando o metodo
    conta.sacar(1500); // tentativa de saque maior que o saldo
    return 0;
} 