#include <iostream>
#include <string>
#include <vector>
#include <limits> // necessário para o cin.ignore()

using namespace std;

struct Filme {
    string Titulo;
    string Diretor;
    int AnoLancamento;
    int DuracaoMinutos;
};

int main() {
    // vetor pra armazenar os filmes
    const int QUANTIDADE = 3;
    Filme vetorFilmes[QUANTIDADE];

    cout << " CADASTRO DE FILMES " << endl;

    //ler os dados dos 3 filmes
    for (int i = 0; i < QUANTIDADE; i++) {
        cout << "\nDigite os dados do " << i + 1 << " filme:\n";
        
        cout << "Titulo: ";
        getline(cin, vetorFilmes[i].Titulo);

        cout << "Diretor: ";
        getline(cin, vetorFilmes[i].Diretor);

        cout << "Ano de Lancamento: ";
        cin >> vetorFilmes[i].AnoLancamento;

        cout << "Duracao (em minutos): ";
        cin >> vetorFilmes[i].DuracaoMinutos;

        // limpar o buffer do cin para evitar problemas com getline() 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Exibindo os filmes cadastrados 
    cout << "\nFILMES CADASTRADOS: ";
    for (int i = 0; i < QUANTIDADE; i++) {
        cout << "Filme " << i + 1 << ": " << vetorFilmes[i].Titulo 
             << " | Diretor: " << vetorFilmes[i].Diretor 
             << " | Ano: " << vetorFilmes[i].AnoLancamento 
             << " | Duração: " << vetorFilmes[i].DuracaoMinutos << " min" << endl;
    }

    // descobrir o filme mais antigo
    // indice 0 é o filme mais antigo inicialmente
    int indiceMaisAntigo = 0;

    for (int i = 1; i < QUANTIDADE; i++) {
        if (vetorFilmes[i].AnoLancamento < vetorFilmes[indiceMaisAntigo].AnoLancamento) {
            indiceMaisAntigo = i; // Atualiza o índice se achar um mais antigo
        }
    }

    // exibir o filme mais antigo
    cout << "\n-----------------------------------" << endl;
    cout << "O filme mais antigo eh: " << vetorFilmes[indiceMaisAntigo].Titulo 
         << " (" << vetorFilmes[indiceMaisAntigo].AnoLancamento << ")" << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}