#include <iostream> //aprendendo vetor e matriz
using namespace std;

int main() {
    int i;
    int Vetor[5]; // vetor de 5 posições

    for(i=0; i<5; i++) {
        Vetor[i] = 5 - i; // atribui o valor 5, 4, 3, 2, 1 às posições do vetor

        for(i=0; i<5; i++) {
            cout << "o valor guardado na posição" << i << " é " << Vetor[i] << endl;

            return 0;
        }
    }

}