#include <iostream> //aprendendo vetor e matriz 
using namespace std;
int main() {
    int Vetor[5]; // vetor de 5 posições
    int Matriz[5][3]; // declara uma matriz de 5 linhas e 3 colunas

    Vetor[0] = 9; // atribui o valor 9 à primeira posição do vetor
    Vetor[4] = 30; // atribui o valor 30 à última posição do vetor

    Matriz[0][1] = 15; // coloca 15 na celula da primeira linha e segunda coluna da matriz


    cout << "O Vetor na posicao 0 tem o valor " << Vetor[0];
    return 0;                       
}
