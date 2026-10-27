using System;

class Funcionario
{
    public string Nome;
    public double SalarioBruto;
    public double Imposto;

    public void CalcularImposto()
    {
        if (SalarioBruto <= 2000)
            Imposto = SalarioBruto * 0.10;
        else if (SalarioBruto <= 3000)
            Imposto = SalarioBruto * 0.15;
        else
            Imposto = SalarioBruto * 0.20;
    }

    public void MostrarDados()
    {
        CalcularImposto();

        Console.WriteLine("Nome: " + Nome);
        Console.WriteLine("Salario liquido: " + (SalarioBruto - Imposto));
    }

    public void AumentarSalario(double porcentagem)
    {
        SalarioBruto += SalarioBruto * porcentagem / 100;
    }
}

class Program
{
    static void Main()
    {
        Funcionario f = new Funcionario();

        Console.Write("Nome: ");
        f.Nome = Console.ReadLine();

        Console.Write("Salario bruto: ");
        f.SalarioBruto = double.Parse(Console.ReadLine());

        f.MostrarDados();

        Console.Write("Porcentagem de aumento: ");
        double aumento = double.Parse(Console.ReadLine());

        f.AumentarSalario(aumento);

        Console.WriteLine("Depois do aumento:");
        f.MostrarDados();
    }
}