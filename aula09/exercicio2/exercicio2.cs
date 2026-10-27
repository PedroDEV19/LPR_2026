using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        List<string> nomes = new List<string>();
        
            Console.Write($"Digite a quantidade de nomes: ");
           int numNomes = int.Parse(Console.ReadLine());

        for (int i = 1; i <= numNomes; i++)
        {
            Console.Write($"Digite o {i}º nome: ");
            nomes.Add(Console.ReadLine());
        }

       
    }
}