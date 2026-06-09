#include <iostream>

class Animal {
public: 
     void respirar() { std::cout << "Respiro como um animal." << std::endl; }
};

class Reptil {
public: 
    void rastejar() { std::cout << "Rastejo como um réptil." << std::endl; }
};

class Cobra : public Animal, public Reptil {
public:
    void respirar() { std::cout << "Respiro como uma cobra." << std::endl;};
};

int main() {
    Cobra cobra;

    cobra.respirar(); // Chama o método da classe Cobra
    cobra.Animal::respirar(); // Chama o método da classe Animal
    cobra.rastejar(); // Chama o método da classe Reptil

    return 0;
}

