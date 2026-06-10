#include <iostream>
using namespace std;

// --- CLASSE BASE 1 ---
class DispositivoChamada {
public:
    void fazerLigacao() {
        cout << "Conectando chamada de voz..." << endl;
    }

    // Método que causará ambiguidade
    void ligar() {
        cout << "Dispositivo de chamada pronto para uso." << endl;
    }
};

// --- CLASSE BASE 2 ---
class CameraDigital {
public:
    void tirarFoto() {
        cout << "Foto capturada e salva na galeria." << endl;
    }

    // Método com o mesmo nome para gerar ambiguidade
    void ligar() {
        cout << "Lente aberta e sensor de imagem ativo." << endl;
    }
};

// --- CLASSE DERIVADA (Herança Múltipla) ---
// Herda de ambas as classes, exatamente como nos exemplos anteriores
class Smartphone : public DispositivoChamada, public CameraDigital {
public:
    // Sobrescrita do método (Overriding)
    void ligar() {
        cout << "Smartphone inicializando o sistema operacional..." << endl;
    }
};

// --- FUNÇÃO PRINCIPAL ---
int main() {
    Smartphone meuCelular;

    // 1. Chama o método do próprio Smartphone (Sobrescrita)
    meuCelular.ligar(); 
    cout << "---------------------------------------" << endl;

    // 2. Resolve a ambiguidade chamando o método específico de cada classe pai (Operador ::)
    meuCelular.DispositivoChamada::ligar(); 
    meuCelular.CameraDigital::ligar();      
    cout << "---------------------------------------" << endl;

    // 3. Chama os métodos exclusivos de cada classe pai
    meuCelular.fazerLigacao(); 
    meuCelular.tirarFoto();    

    return 0;
}