#include <iostream>
#include <random> //numeros aleatorios

using namespace std;

int main() {
    //gerar numero aleatorio de 1 a 100
    random_device rd;
    uniform_int_distribution<> distribuicao(1, 100);
    int valorInteiro = distribuicao(rd);

    int chute;
    int tentativas = 0;

    cout << "Jogo da advinhacao" << endl;
    cout << "Tente adivinhar o numero entre 1 e 100." << endl;

    // do=executa pelo menos uma vez
    do {
        cout << "\nDigite seu chute: ";
        cin >> chute;
        tentativas++; 

        if (chute > valorInteiro) {
            cout << "Chutou alto demais" << endl;
        } 
        else if (chute < valorInteiro) {
            cout << "Chutou baixo demais" << endl;
        } 
        else {
            cout << "Acertou" << endl;
        }

    } while (chute != valorInteiro); // vai repetir enquanto for dirente do numero sorteado

    cout << "\nVoce precisou de " << tentativas << " tentativas para acertar." << endl;

    return 0;
}