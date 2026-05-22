#include <iostream>
using namespace std;


class Animal {
public:
      virtual void fazerSom() const = 0; // metodo virtual puro
};

class Cachorro : public Animal {
public:
      void fazerSom() const override {
            cout << "Au Au!" << endl;
      }
};

class Gato : public Animal {
public:
      void fazerSom() const override {
                cout << "Miau!" << endl;
        }
    };

int main() {
    Cachorro c;
    Gato c;

    c.fazerSom(); // Au Au!
    c.fazerSom(); // Miau!

    return 0;
}