using System;

class Program {
    static void Main() {
        int opcao = -1;
        do {
            Console.WriteLine("\n MENU DE EXERCICIOS ");
            Console.WriteLine("1 - Media de numeros pares");
            Console.WriteLine("2 - Soma de impares mult. de 3 (50 a 500)");
            Console.WriteLine("3 - Soma dos digitos de um quadrado");
            Console.WriteLine("0 - Sair");
            Console.Write("Escolha uma opcao: ");
            
            // Valida a entrada do usuario
            string? entrada = Console.ReadLine();  // pode ser null, entao usamos string? 
            if (!int.TryParse(entrada, out opcao)) {
                Console.WriteLine("Por favor, digite um numero valido.");
                continue;
            }

            switch (opcao) {
                case 1:
                    CalcularMediaPares();
                    break;
                case 2:
                    SomarImpares();
                    break;
                case 3:
                    SomarDigitos();
                    break;
                case 0:
                    Console.WriteLine("Saindo...");
                    break;
                default:
                    Console.WriteLine("Opcao invalida!");
                    break;
            }
        } while (opcao != 0);
    }

     //EXERCÍCIO 1 
    static void CalcularMediaPares() {
        Console.Write("Quantos numeros deseja inserir? ");
        int qtd = int.Parse(Console.ReadLine() ?? "0");
        int soma = 0, cont = 0;

        for (int i = 0; i < qtd; i++) {
            Console.Write($"Digite o {i+1}º numero: ");
            int n = int.Parse(Console.ReadLine() ?? "0");
            if (n % 2 == 0) {
                soma += n;
                cont++;
            }
        }
        if (cont > 0) 
            Console.WriteLine($"A media dos pares eh: {(double)soma / cont}");
        else 
            Console.WriteLine("Nenhum numero par foi digitado.");
    }

    // EXERCÍCIO 3
    static void SomarImpares() {
        int soma = 0;
        for (int i = 50; i <= 500; i++) {
            if (i % 2 != 0 && i % 3 == 0) {
                soma += i;
            }
        }
        Console.WriteLine($"A soma dos impares mult. de 3 entre 50 e 500 eh: {soma}");
    }

    // EXERCÍCIO 4
    static void SomarDigitos() {
        Console.Write("Digite um numero inteiro: ");
        int num = int.Parse(Console.ReadLine() ?? "0");
        int quadrado = num * num;
        int soma = 0;
        int aux = quadrado;

        while (aux > 0) {
            soma += aux % 10;
            aux /= 10;
        }
        Console.WriteLine($"O quadrado eh {quadrado} e a soma dos seus digitos eh: {soma}");
    }
}