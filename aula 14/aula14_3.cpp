#include<iostream>
using namespace std;

class Presenca {
public:
    void registrarPresenca() {
        cout << "Presença registrada." << endl;
    }

    void status() {
        cout << "Status da presença: Ativa." << endl;
    }
};

class Avaliacao {
public:
    void lancarNota() {
        cout << "Nota lançada." << endl;
    }

    void status() {
        cout << "Status da avaliação: Concluída." << endl;
    }
};

class Aluno : public Presenca, public Avaliacao {
public:
    void status() {
        cout << "Aluno com presença e avaliação ativas." << endl;
    }
};

int main() {
    Aluno aluno;

    Aluno.status();
    Aluno.presence::status();
    Aluno.lancarNota();

    Aluno.registrarPresenca();
    Aluno.lancarnota();

    return 0;
}