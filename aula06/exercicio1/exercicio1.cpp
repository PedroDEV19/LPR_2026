#include <iostream>

int reverterInteiro(int num) {
    int reverso = 0;
    int resto;

    while (num != 0) {
        resto = num % 10;          // pega o ultimo digito do numero
        reverso = (reverso * 10) + resto; // desloca os digitos do número reverso para a esquerda e adiciona o novo digito
        num = num / 10;            // tira o ultimo digito do número original
    }

    return reverso; // retorna o número invertido
}

int main() {
    int numeroOriginal = 123; // digite aqui o numero que deseja inverter
    
    // chama a função para reverter o número original
    int numeroInvertido = reverterInteiro(numeroOriginal);

    std::cout << "Original: " << numeroOriginal << std::endl;
    std::cout << "Invertido: " << numeroInvertido << std::endl;

    return 0;
}