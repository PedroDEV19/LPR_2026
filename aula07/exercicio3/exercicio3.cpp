#include <iostream>
#include <string>

using namespace std;

int main() {
    string cidades[4] = {
        "Vitoria",
        "Belo Horizonte",
        "Rio de Janeiro",
        "Sao Paulo"
    };

    int distancias[4][4] = {
        {0,   524, 521, 882},
        {524, 0,   434, 586},
        {521, 434, 0,   429},
        {882, 586, 429, 0}
    };

    int origem, destino;

    do {
        cout << "\nCidades disponiveis:\n";
        for (int i = 0; i < 4; i++) {
            cout << i << " - " << cidades[i] << endl;
        }

        cout << "\nDigite o numero da cidade de origem: ";
        cin >> origem;

        cout << "Digite o numero da cidade de destino: ";
        cin >> destino;

        cout << "\nDistancia entre "
             << cidades[origem] << " e "
             << cidades[destino] << ": "
             << distancias[origem][destino]
             << " km\n";

    } while (origem != destino);

    cout << "\nPrograma encerrado.\n";

    return 0;
}