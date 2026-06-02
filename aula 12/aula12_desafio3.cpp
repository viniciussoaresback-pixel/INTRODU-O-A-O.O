#include <iostream>
#include <string>

class Livro {
private:
    // Propriedades (Atributos)
    std::string titulo;
    std::string autor;
    std::string editora;
    int anoPublicacao;
    bool aberto;       // Estado para saber se o livro está aberto
    bool disponivel;   // Estado para saber se o livro está na biblioteca ou alugado

public:
    // Construtor para inicializar as propriedades do livro
    Livro(std::string t, std::string a, std::string ed, int ano) {
        titulo = t;
        autor = a;
        editora = ed;
        anoPublicacao = ano;
        aberto = false;       // O livro começa fechado
        disponivel = true;    // O livro começa disponível para aluguel
    }

    // Métodos
    void abrir() {
        if (!aberto) {
            aberto = true;
            std::cout << "Voce abriu o livro: \"" << titulo << "\".\n";
        } else {
            std::cout << "O livro \"" << titulo << "\" ja esta aberto.\n";
        }
    }

    void fechar() {
        if (aberto) {
            aberto = false;
            std::cout << "Voce fechou o livro: \"" << titulo << "\".\n";
        } else {
            std::cout << "O livro \"" << titulo << "\" ja esta fechado.\n";
        }
    }

    void ler() {
        if (aberto) {
            std::cout << "Lendo uma pagina interessante de \"" << titulo << "\"...\n";
        } else {
            std::cout << "Nao da para ler. Voce precisa abrir o livro primeiro!\n";
        }
    }

    void alugar() {
        if (disponivel) {
            disponivel = false;
            std::cout << "Livro \"" << titulo << "\" alugado com sucesso!\n";
        } else {
            std::cout << "Desculpe, o livro \"" << titulo << "\" ja esta alugado no momento.\n";
        }
    }

    void guardar() {
        if (!disponivel) {
            disponivel = true;
            aberto = false; // Garante que volta fechado para a estante
            std::cout << "Livro \"" << titulo << "\" devolvido e guardado na estante.\n";
        } else {
            std::cout << "O livro \"" << titulo << "\" ja esta guardado na estante.\n";
        }
    }

    // Método auxiliar para exibir os dados do livro
    void exibirInfo() {
        std::cout << "--- Informacoes do Livro ---\n";
        std::cout << "Titulo: " << titulo << "\n";
        std::cout << "Autor: " << autor << "\n";
        std::cout << "Editora: " << editora << "\n";
        std::cout << "Ano: " << anoPublicacao << "\n";
        std::cout << "-------------------------\n";
    }
};

// Testando a classe no método main
int main() {
    // Criando um objeto da classe Livro
    Livro meuLivro("O Senhor dos Aneis", "J.R.R. Tolkien", "Martins Fontes", 1954);

    // Mostra os dados do livro
    meuLivro.exibirInfo();

    // Testando os métodos e a lógica
    meuLivro.ler();       // Vai avisar que precisa abrir
    meuLivro.abrir();     // Abre o livro
    meuLivro.ler();       // Agora funciona a leitura
    meuLivro.fechar();    // Fecha o livro
    
    std::cout << "\n";

    meuLivro.alugar();    // Aluga o livro
    meuLivro.alugar();    // Tenta alugar de novo (vai dizer que já está alugado)
    meuLivro.guardar();   // Devolve o livro

    return 0;
}