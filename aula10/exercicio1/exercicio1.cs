using System;

class Retangulo
{
    public double Altura;
    public double Largura;

    public double calcArea()
    {
        return Altura * Largura;
    }

    public double calcPerimetro()
    {
        return 2 * (Altura + Largura);
    }
}

class Program
{
    static void Main(string[] args)
    {
        Retangulo retangulo = new Retangulo();

        Console.Write("Digite a altura do retangulo: ");
        retangulo.Altura = double.Parse(Console.ReadLine());

        Console.Write("Digite a largura do retangulo: ");
        retangulo.Largura = double.Parse(Console.ReadLine());

        Console.WriteLine("Area: " + retangulo.calcArea());
        Console.WriteLine("Perimetro: " + retangulo.calcPerimetro());
    }
}