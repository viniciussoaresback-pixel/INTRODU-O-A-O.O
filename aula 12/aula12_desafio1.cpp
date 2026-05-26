#include <iostream>
#include <string>

// Classe Base
class Funcionario {
protected:
    std::string nome;
    double salarioBase;

public:
    Funcionario(std::string n, double salario) : nome(n), salarioBase(salario) {}

    // Função virtual que será sobrescrita pelas classes derivadas
    virtual double calcularSaldo() const {
        return salarioBase;
    }

    std::string getNome() const { return nome; }
    virtual ~Funcionario() {} // Destrutor virtual para boa prática de POO
};

// Classe Derivada: Gerente
class Gerente : public Funcionario {
private:
    double bonusFixo;

public:
    Gerente(std::string n, double salario, double bonus) 
        : Funcionario(n, salario), bonusFixo(bonus) {}

    // Sobrescrita (override) do cálculo para o Gerente
    double calcularSaldo() const override {
        return salarioBase + bonusFixo;
    }
};

// Classe Derivada: Vendedor
class Vendedor : public Funcionario {
private:
    double totalVendas;
    double comissao; // Porcentagem (ex: 0.10 para 10%)

public:
    Vendedor(std::string n, double salario, double vendas, double taxaComissao) 
        : Funcionario(n, salario), totalVendas(vendas), comissao(taxaComissao) {}

    // Sobrescrita (override) do cálculo para o Vendedor
    double calcularSaldo() const override {
        return salarioBase + (totalVendas * comissao);
    }
};

// Função Principal para testar
int main() {
    // Criando instâncias de Gerente e Vendedor
    Gerente gerente("Ana Silva", 5000.0, 1500.0);       // Salário 5000 + Bônus 1500
    Vendedor vendedor("Carlos Souza", 2000.0, 30000.0, 0.05); // Salário 2000 + 5% de 30000

    // Demonstração do Polimorfismo usando ponteiros da classe base
    Funcionario* f1 = &gerente;
    Funcionario* f2 = &vendedor;

    std::cout << "--- Folha de Pagamento ---" << std::endl;
    std::cout << "Gerente: " << f1->getNome() << " | Saldo a Receber: R$ " << f1->calcularSaldo() << std::endl;
    std::cout << "Vendedor: " << f2->getNome() << " | Saldo a Receber: R$ " << f2->calcularSaldo() << std::endl;

    return 0;
}