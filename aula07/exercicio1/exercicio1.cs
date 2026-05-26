using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        //criando o vetor para armazenar os 10 números inteiros
        int[] numeros = new int[10];

        //criando listas para armazenar os números pares e ímpares separadamente
        List<int> listaPares = new List<int>();
        List<int> listaImpares = new List<int>();

        Console.WriteLine("Digite 10 números inteiros:");

        //laço for para ler os 10 números
        for (int i = 0; i < numeros.Length; i++)
        {
            Console.Write($"Número {i + 1}: "); //solicita ao usuário que digite um número
            numeros[i] = int.Parse(Console.ReadLine()); //lê o número digitado e armazena no vetor

            //verifica se o número é par ou ímpar
            if (numeros[i] % 2 == 0)
            {
                listaPares.Add(numeros[i]);
            }
            else
            {
                listaImpares.Add(numeros[i]);
            }
        }

        //converte as listas de volta para vetores 
        int[] vetorPares = listaPares.ToArray();
        int[] vetorImpares = listaImpares.ToArray();

        //mostra os resultados
        Console.WriteLine("\nRESULTADOS: ");

        Console.WriteLine($"\nNúmeros Pares ({vetorPares.Length}):"); //quantidade de numeros pares
        ExibirVetor(vetorPares);

        Console.WriteLine($"\nNúmeros Ímpares ({vetorImpares.Length}):"); //quantidade de numeros ímpares
        ExibirVetor(vetorImpares);
    }

    //função para exibir os números de um vetor
    static void ExibirVetor(int[] vetor)
    {
        if (vetor.Length == 0)
        {
            Console.WriteLine("[Nenhum número encontrado]");
            return;
        }

        foreach (int num in vetor) //
        {
            Console.Write(num + " ");
        }
        Console.WriteLine();
    }
}
