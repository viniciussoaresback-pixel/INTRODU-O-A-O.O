#include <iostream>
#include <cmath> // Necessário para a constante M_PI e a função pow()

// Classe Abstrata (Base)
class Forma {
public:
    // Função virtual pura: torna a classe abstrata
    virtual double area() const = 0;

    // Destrutor virtual é essencial para classes abstratas
    virtual ~Forma() {}
};

// Classe Derivada: Retangulo
class Retangulo : public Forma {
private:
    double largura;
    double altura;

public:
    Retangulo(double l, double a) : largura(l), altura(a) {}

    // Implementação obrigatória do método area()
    double area() const override {
        return largura * altura;
    }
};

// Classe Derivada: Circulo
class Circulo : public Forma {
private:
    double raio;

public:
    Circulo(double r) : raio(r) {}

    // Implementação obrigatória do método area()
    // Utiliza a fórmula A = ? * r²
    double area() const override {
        return M_PI * std::pow(raio, 2);
    }
};

// Função Principal para testar
int main() {
    // Não podemos fazer: Forma f; (Isso gera erro de compilação porque Forma é abstrata)

    // Criando os objetos derivados
    Retangulo retangulo(5.0, 4.0); // Largura = 5, Altura = 4
    Circulo circulo(3.0);          // Raio = 3

    // Usando ponteiros da classe abstrata para demonstrar o polimorfismo
    Forma* f1 = &retangulo;
    Forma* f2 = &circulo;

    std::cout << "--- Calculador de Areas ---" << std::endl;
    std::cout << "Area do Retangulo: " << f1->area() << " m²" << std::endl;
    std::cout << "Area do Circulo:   " << f2->area() << " m²" << std::endl;

    return 0;
}