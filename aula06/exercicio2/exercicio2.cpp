#include <iostream>

using namespace std;

// EXERCÍCIO 1: MÉDIA DE PARES 
// recebe a quantidade de números a serem lidos e retorna a média (double)
double calcularMediaPares(int total) {
    int numero, somaPares = 0, contadorPares = 0;
    
    for (int i = 0; i < total; i++) {
        cout << "Digite um numero: ";
        cin >> numero;
        if (numero % 2 == 0) {
            somaPares += numero;
            contadorPares++;
        }
    }
    
    if (contadorPares > 0) {
        return (double)somaPares / contadorPares;
    }
    return 0; // retorna 0 caso não haja pares para evitar divisao por zero
}

// EXERCÍCIO 3: SOMA DE ÍMPARES MÚLTIPLOS DE 3
// recebe o início e o fim do intervalo e retorna a soma total
int somarImparesMultiplos3(int inicio, int fim) {
    int soma = 0;
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
    }
    return soma;
}

// EXERCÍCIO 4: SOMA DE DÍGITOS DO QUADRADO
// recebe um numero, calcula o quadrado e retorna a soma dos seus dígitos
int somarDigitosQuadrado(int numero) {
    int quadrado = numero * numero;
    int soma = 0;
    
    cout << "O quadrado de " << numero << " eh: " << quadrado << endl;
    
    while (quadrado > 0) {
        soma += quadrado % 10;
        quadrado /= 10;
    }
    return soma;
}

// FUNÇÃO PRINCIPAL COM MENU DE EXERCÍCIOS
int main() {
    int opcao;

    do {
        cout << "\n MENU DE EXERCICIOS " << endl;
        cout << "1 - Media de numeros pares" << endl;
        cout << "2 - Soma de impares mult. de 3 (50 a 500)" << endl;
        cout << "3 - Soma dos digitos de um quadrado" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int qtd;
                cout << "Quantos numeros deseja inserir? ";
                cin >> qtd;
                double media = calcularMediaPares(qtd);
                if (media > 0) 
                    cout << "Media dos pares: " << media << endl;
                else 
                    cout << "Nenhum par foi digitado." << endl;
                break;
            }
            case 2: {
                // Intervalo fixo de 50 a 500 conforme solicitado
                int resultado = somarImparesMultiplos3(50, 500);
                cout << "A soma no intervalo [50, 500] eh: " << resultado << endl;
                break;
            }
            case 3: {
                int num;
                cout << "Digite um numero inteiro: ";
                cin >> num;
                int somaDigitos = somarDigitosQuadrado(num);
                cout << "A soma dos digitos do quadrado eh: " << somaDigitos << endl;
                break;
            }
            case 0:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 0);

    return 0;
}