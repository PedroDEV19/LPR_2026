using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<double> notas = new List<double>();

        for (int i = 1; i <= 5; i++)
        {
            Console.Write($"Digite a {i}ª nota: ");
            double nota = Convert.ToDouble(Console.ReadLine());
            notas.Add(nota);
        }

        double maior = notas[0];
        double menor = notas[0];
        double soma = 0;

        foreach (double nota in notas)
        {
            if (nota > maior)
                maior = nota;

            if (nota < menor)
                menor = nota;

            soma += nota;
        }

        double media = soma / notas.Count;

        Console.WriteLine("\nNotas cadastradas:");
        foreach (double nota in notas)
        {
            Console.WriteLine(nota);
        }

        Console.WriteLine($"\nMaior nota: {maior}");
        Console.WriteLine($"Menor nota: {menor}");
        Console.WriteLine($"Média das notas: {media:F2}");
    }
}
