using System;

class Exercicio4
{
    static void Main()
    {
        Console.Write("Digite um número inteiro: ");
        int numero = int.Parse(Console.ReadLine());

        // calculo do quadrado do numero
        int quadrado = numero * numero;
        Console.WriteLine($"{numero} ao quadrado é: {quadrado}");

        int soma = 0;
        int auxQuadrado = quadrado; //auxQuadrado guarda o valor para a decomposicao no final

        // while para decompor o numero
        // soma os digitos enquanto nao for 0
        while (auxQuadrado > 0)
        {
            soma += auxQuadrado % 10; // peag o ultimo digito (resto da divisão por 10)
            auxQuadrado /= 10;        // remove o ultimo digito (divisão inteira por 10)
        }

        Console.WriteLine($"A soma dos dígitos de {quadrado} é: {soma}");
    }
}