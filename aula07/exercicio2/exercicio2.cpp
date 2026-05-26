#include <iostream>
#include <vector>

using namespace std;

int main() {
    //criando o vetor para armazenar os 10 números inteiros
    int numeros[10];
    int numeroPesquisa;
    int contadorErros = 0;
    vector<int> posicoesEncontradas; //guarda as posições onde o número foi achado

    cout << "Digite 10 numeros inteiros:" << endl;

    //laço para leitura dos dados 
    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nDigite um numero para pesquisar no vetor: ";
    cin >> numeroPesquisa;

    //busca o número dentro do vetor
    for (int i = 0; i < 10; i++) {
        if (numeros[i] == numeroPesquisa) {
            contadorErros++;
            posicoesEncontradas.push_back(i); // Guarda a posição onde o número foi encontrado
        }
    }

    //mostra o resultado da busca para o usuário
    cout << "\nRESULTADOS: " << endl;
    
    if (contadorErros > 0) {
        cout << "O numero " << numeroPesquisa << " foi encontrado" << endl;
        cout << "Total de erros: " << contadorErros << " vez(es)." << endl;
        
        cout << "Encontrado na posicao do vetor: ";
        for (int pos : posicoesEncontradas) {
            cout << "[" << pos << "] ";
        }
        cout << endl;
        
       //avisando o usuario que as posições começam em 0
        cout << "(Lembrando que em C++, os vetores começam na posicao 0)" << endl;
    } else {
        cout << "O numero " << numeroPesquisa << " nao existe no vetor." << endl;
    }

    return 0;
}