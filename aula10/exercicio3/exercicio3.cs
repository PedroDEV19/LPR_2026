using System;

class Aluno
{
    public int Matricula;
    public string Nome;
    public double Nota1;
    public double Nota2;
    public double Trabalho;

    public double Media()
    {
        return (Nota1 * 2.5 + Nota2 * 2.5 + Trabalho * 2) / 7;
    }

    public double Final()
    {
        if (Media() >= 60)
            return 0;

        return Math.Max(0, 120 - Media());
    }
}

class Program
{
    static void Main()
    {
        Aluno a = new Aluno();

        Console.Write("Matricula: ");
        a.Matricula = int.Parse(Console.ReadLine());

        Console.Write("Nome: ");
        a.Nome = Console.ReadLine();

        Console.Write("Nota da prova 1: ");
        a.Nota1 = double.Parse(Console.ReadLine());

        Console.Write("Nota da prova 2: ");
        a.Nota2 = double.Parse(Console.ReadLine());

        Console.Write("Nota do trabalho: ");
        a.Trabalho = double.Parse(Console.ReadLine());

        Console.WriteLine("Aluno: " + a.Nome);
        Console.WriteLine("Media: " + a.Media().ToString("F2"));

        if (a.Media() >= 60)
            Console.WriteLine("Aluno aprovado!");
        else
            Console.WriteLine("Precisa tirar na final: " + a.Final().ToString("F2"));
    }
}
