#include <iostream>

using namespace std;

// ===== CLASSE PILHA =====
class Pilha {
private:
    int topo;
    int pilha[5];

public:
    Pilha() {
        topo = -1;
    }

    void push(int valor) {
        if (topo == 4) {
            cout << "Pilha cheia!" << endl;
        } else {
            topo++;
            pilha[topo] = valor;
        }
    }

    void mostrarPilha() {
        cout << "\nPilha:" << endl;

        for (int i = topo; i >= 0; i--) {
            cout << pilha[i] << endl;
        }
    }
};

// ===== CLASSE FILA =====
class Fila {
private:
    int inicio, fim;
    int fila[5];

public:
    Fila() {
        inicio = 0;
        fim = -1;
    }

    void enqueue(int valor) {
        if (fim == 4) {
            cout << "Fila cheia!" << endl;
        } else {
            fim++;
            fila[fim] = valor;
        }
    }

    void mostrarFila() {
        cout << "\nFila:" << endl;

        for (int i = inicio; i <= fim; i++) {
            cout << fila[i] << endl;
        }
    }
};

// ===== PROGRAMA PRINCIPAL =====
int main() {

    Pilha p;
    Fila f;

    // Inserindo na pilha
    p.push(10);
    p.push(20);
    p.push(30);

    // Inserindo na fila
    f.enqueue(100);
    f.enqueue(200);
    f.enqueue(300);

    // Mostrando
    p.mostrarPilha();
    f.mostrarFila();

    return 0;
}