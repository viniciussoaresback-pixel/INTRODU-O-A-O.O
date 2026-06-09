#include <iostream>
using namespace std;

class Energia{
public: 
    void ligar() {
        cout << "Sistema de energia ligado." << endl;
    }
    void delsigar() {
        cout << "Sistema de energia desligado." << endl;
    }
};

class Seguranca {
public: 
    void monitorar() {
        cout << "Sistema de segurança monitorando." << endl;   
    }

    void status() {
        cout << "Status da seguranca: Ativa." << endl;
    }
};

class CasaInteligente : public Energia, public Seguranca {
public:
    void status() {
        cout << "Casa inteligente funcionando normalmente." << endl;
    }
};

int main() {
    CasaInteligente casa;

    casa.status();
    casa.Seguranca::status();
    casa.ligar();
    casa.monitorar();

    return 0;
}