#include <iostream>

using namespace std;

int main() {
    int quantidadeTotal, numero; //quantos numeros vão ser digitados
    int somaPares = 0; //soma dos pares
    int contadorPares = 0; //quantos pares foram digitados
    int i = 0; //quantas vezes deu o loop

    cout << "Digite a quantidade de numeros que serao inseridos: ";
    cin >> quantidadeTotal;

    while (i < quantidadeTotal) {
        cout << "Digite um numero: ";
        cin >> numero;

        if (numero % 2 == 0) {
            somaPares += numero;
            contadorPares++;
        }

        i++; 
    }

    if (contadorPares > 0) {
        double media = (double)somaPares / contadorPares;
        cout << "\nA media dos numeros pares digitados eh: " << media << endl;
    } else {
        cout << "\nNenhum numero par foi digitado." << endl;
    }
