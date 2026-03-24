using System;

class Program
{
    static void Main()
    {
        int soma = 0;

        // entre 50 e 500
        for (int i = 50; i <= 500; i++)
        {
            // tem que ser impar e multiplo de 3
            if (i % 2 != 0 && i % 3 == 0)
            {
                soma += i; // adiciona o número na soma
            }
        }

        Console.WriteLine("A soma dos números impares multiplos de 3 entre 50 e 500 eh: " + soma);
    }
}