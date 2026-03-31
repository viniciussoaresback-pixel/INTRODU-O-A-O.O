//aula 5 exercicio 8
#include <iostream>
#include <iomanip> // Para formatar o preço com duas casas decimais

using namespace std;

int main() {
    int categoria, filme;

    cout << "--- CINE-TECH STREAMING ---" << endl;
    cout << "Escolha uma categoria:" << endl;
    cout << "1 - Acao" << endl;
    cout << "2 - Animacao" << endl;
    cout << "3 - Terror" << endl;
    cout << "Opcao: ";
    cin >> categoria;

    // Configura a exibição de números decimais (ex: 15.90)
    cout << fixed << setprecision(2);

    switch (categoria) {
        case 1:
            cout << "\n--- CATEGORIA: ACAO ---" << endl;
            cout << "1 - Mad Max: Estrada da Furia" << endl;
            cout << "2 - John Wick 4" << endl;
            cout << "Escolha o filme: ";
            cin >> filme;

            switch (filme) {
                case 1:
                    cout << "\nFilme selecionado: Mad Max" << endl;
                    cout << "Preco do aluguel: R$ 9.90" << endl;
                    break;
                case 2:
                    cout << "\nFilme selecionado: John Wick 4" << endl;
                    cout << "Preco do aluguel: R$ 14.90" << endl;
                    break;
                default:
                    cout << "\nFilme nao disponivel nesta categoria." << endl;
            }
            break;

        case 2:
            cout << "\n--- CATEGORIA: ANIMACAO ---" << endl;
            cout << "1 - Toy Story" << endl;
            cout << "2 - Spider-Man: Into the Spider-Verse" << endl;
            cout << "Escolha o filme: ";
            cin >> filme;

            switch (filme) {
                case 1:
                    cout << "\nFilme selecionado: Toy Story" << endl;
                    cout << "Preco do aluguel: R$ 7.50" << endl;
                    break;
                case 2:
                    cout << "\nFilme selecionado: Spider-Man" << endl;
                    cout << "Preco do aluguel: R$ 12.00" << endl;
                    break;
                default:
                    cout << "\nFilme nao disponivel nesta categoria." << endl;
            }
            break;

        case 3:
            cout << "\n--- CATEGORIA: TERROR ---" << endl;
            cout << "1 - O Exorcista" << endl;
            cout << "2 - Hereditario" << endl;
            cout << "Escolha o filme: ";
            cin >> filme;

            switch (filme) {
                case 1:
                    cout << "\nFilme selecionado: O Exorcista" << endl;
                    cout << "Preco do aluguel: R$ 5.00" << endl;
                    break;
                case 2:
                    cout << "\nFilme selecionado: Hereditario" << endl;
                    cout << "Preco do aluguel: R$ 10.50" << endl;
                    break;
                default:
                    cout << "\nFilme nao disponivel nesta categoria." << endl;
            }
            break;

        default:
            cout << "\nCategoria inexistente no catalogo." << endl;
    }

    return 0;
}