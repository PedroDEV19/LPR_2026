using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Random random = new Random();
        List<int> numeros = new List<int>();

        for (int i = 0; i < 100; i++)
        {
            numeros.Add(random.Next(0, 1001));
        }

        numeros.Sort();

        Console.WriteLine("Ordem:");
        foreach (int numero in numeros)
        {
            Console.Write(numero + "\n ");
        }

        numeros.RemoveAll(n => n % 2 == 0);

        Console.WriteLine("Lista sem os números pares:");
        foreach (int numero in numeros)
        {
            Console.Write(numero + "\n ");
        }

        Dictionary<int, int> contagem = new Dictionary<int, int>();

        foreach (int numero in numeros)
        {
            if (contagem.ContainsKey(numero))
                contagem[numero]++;
            else
                contagem[numero] = 1;
        }

        Console.WriteLine("Números repetidos:");

        bool encontrou = false;

        foreach (var item in contagem)
        {
            if (item.Value > 1)
            {
                Console.WriteLine($"{item.Key} aparece {item.Value} vezes");
                encontrou = true;
            }
        }

        if (!encontrou)
        {
            Console.WriteLine("Não existem números repetidos.");
        }
    }
}
