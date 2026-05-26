#include <iostream>
#include <string>

using namespace std;

// 1. CLASSE ABSTRATA (INTERFACE)
class Instrumento {
protected: // Atributos acessíveis apenas pela classe mãe e suas filhas
    string nome;
    string tipo;

public:
    // Construtor da classe base
    Instrumento(string nome, string tipo) {
        this->nome = nome;
        this->tipo = tipo;
    }

    // Destrutor Virtual (Regra de ouro para polimorfismo com ponteiros!)
    virtual ~Instrumento() {
        cout << "[Destrutor] Limpando instrumento: " << this->nome << endl;
    }

    // Método Virtual Puro (Torna a classe abstrata e obriga os filhos a implementarem)
    virtual void tocar() const = 0;

    // Método comum que todas as classes filhas herdam e usam
    void exibirDetalhes() const {
        cout << "Instrumento: " << this->nome << " | Tipo: " << this->tipo << endl;
    }
};

// 2. CLASSES DERIVADAS (CONCRETAS)
class Violao : public Instrumento {
private:
    int qtdCordas;

public:
    // Construtor chamando o construtor da classe base
    Violao(string nome, int cordas) : Instrumento(nome, "Cordas") {
        this->qtdCordas = cordas;
    }

    // Sobrescrita obrigatória do método virtual puro
    void tocar() const override {
        cout << "?? " << this->nome << " tocando acordes: Dm - G - C... (Som acústico de " << this->qtdCordas << " cordas)" << endl;
    }
};

class Bateria : public Instrumento {
public:
    Bateria(string nome) : Instrumento(nome, "Percussao") {}

    // Sobrescrita obrigatória
    void tocar() const override {
        cout << "?? " << this->nome << " no ritmo: Tum-Dum-Prááá!" << endl;
    }
};

// 3. FUNÇÃO PRINCIPAL
int main() {
    cout << "--- CRIANDO OS INSTRUMENTOS (Usando Ponteiros e Polimorfismo) ---" << endl;

    // Criando objetos dinamicamente usando ponteiros da classe base (Como no seu exemplo 2)
    Instrumento* meuViolao = new Violao("Violao Giannini", 6);
    Instrumento* minhaBateria = new Bateria("Bateria Pearl");

    cout << endl << "--- EXECUTANDO AS ACOES ---" << endl;
    
    // Mostrando detalhes (método herdado)
    meuViolao->exibirDetalhes();
    // Executando o som (polimorfismo em ação)
    meuViolao->tocar(); 

    cout << "---------------------------------------" << endl;

    minhaBateria->exibirDetalhes();
    minhaBateria->tocar();

    cout << endl << "--- DESTRUINDO OBJETOS (Liberando Memoria) ---" << endl;
    // O destrutor virtual garante que o destrutor correto de cada instrumento seja chamado
    delete meuViolao;
    delete minhaBateria;

    return 0;
}