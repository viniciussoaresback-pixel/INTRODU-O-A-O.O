#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definição da struct
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    vector<Pessoa> pessoas; 
    char continuar = 's';

    while (continuar == 's' || continuar =='S') {
        Pessoa p;

        cin.ignore(); // Limpa o buffer antes de ler o nome

        cout << "Digite o nome: ";
        getline(cin, p.nome); // Lê uma linha inteira para o nome

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura (em metros): ";
        cin >> p.altura;

        // Armazena no vetor 
        pessoas.push_back(p);

        cout << "\nDeseja adicionar outra pessoa? (s/n): ";
        cin >> continuar;
    }

    // Exibindo todas as pessoas cadastradas 
    cout << "\n=== Lista de Pessoas ===\n";
    for (int i = 0; i < pessoas.size(); i++) {
        cout << "\nPessoa " << (i + 1) << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Idade: " << pessoas[i].idade << " anos" << endl;
        cout << "Altura: " << pessoas[i].altura << " m" << endl;
        cout << "-----------------------\n";
    }

    return 0;
}