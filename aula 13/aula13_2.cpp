#include <iostream>
using namespace std;

class Pessoa {
protected:
    string nome;
    int idade;

public:
    void cadastrar() {
        cout << "Nome: ";
        cin >> nome;

        cout << "Idade: ";
        cin >> idade;
    }

    void exibirInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
    }

classe Aluno : public Pessoa {
private:
    string curso;
    string matricula;

public:
    void cadastrar() {
        Pessoa::cadastrar();
        cout << "Curso: ";
        cin >> curso;
        cout << "Matrícula: ";
        cin >> matricula;
    }

    void exibirInformacoes() {
        Pessoa::exibirInformacoes();
        cout << "Curso: " << curso << endl;
        cout << "Matrícula: " << matricula << endl;
    }
};