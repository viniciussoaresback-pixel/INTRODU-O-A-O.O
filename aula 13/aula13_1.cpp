#include <iostream>
#include <string>
using namespace std;

// Classe base 
class Veiculo {
protected: // encapsulamento 
    string modelo;
    string cor;
    int velocidade;

public: // encapsulamento]
    Veiculo(string modelo, string cor, int velocidadeInicial)
        : modelo(modelo), cor(cor), velocidade(velocidadeInicial) {}
    {} // constructor

    void acelerar(int incremento) {
        velocidade += incremento;
    }

    void frear(int decremento) { //metodo
        velocidade = (velocidade - decremento >= 0) ? 
        velocidade - decremento : 0; // operador ternário para evitar velocidade negativa
    }

    void exibirInformacoes() {
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Velocidade: " << velocidade << " km/h" << endl;
    }
};

// Classe derivada - herdada herança
class Carro : public Veiculo {
private:
    int numeroPortas;

public:
    Carro(string modelo, string cor, int velocidadeInicial,
         int numeroPortas)
        : Veiculo(modelo, cor, velocidadeInicial), numeroPortas(numeroPortas) 
    {}

    void exibirInformacoes() {
        Veiculo::exibirInformacoes(); // chama o método da classe base
        cout << "Número de Portas: " << numeroPortas << endl;
    }
};

int main() {
    Carro meuCarro("Fusca", "Azul", 0, 4);
    meuCarro.exibirInformacoes();

    cout << "\nAcelerando o carro..." << endl;
    meuCarro.acelerar(20);
    meuCarro.exibirInformacoes();

    cout << "\nFreando o carro..." << endl;
    meuCarro.frear(10);
    meuCarro.exibirInformacoes();

    return 0;
}