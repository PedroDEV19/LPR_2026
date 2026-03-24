using System;

// Definindo as constantes do treinamento
const int META_HORAS = 1000;
const double SEMANAS_POR_MES = 4.5;

Console.Write("Digite o número de horas de treinamento por dia: ");
// O '!' evita o aviso de valor nulo que vimos antes
double horasPorDia = double.Parse(Console.ReadLine()!);

double horasAcumuladas = 0;
int diasTotais = 0;
int diasUteisNaSemana = 0;

// Enquanto não atingir as 1000 horas, o laço continua
while (horasAcumuladas < META_HORAS)
{
    diasTotais++;
    diasUteisNaSemana++;

    // Simula a semana: Se for de segunda a sexta (dia 1 a 5), soma as horas
    if (diasUteisNaSemana <= 5)
    {
        horasAcumuladas += horasPorDia;
    }

    // Se chegou no 7º dia (domingo), reseta o contador da semana
    if (diasUteisNaSemana == 7)
    {
        diasUteisNaSemana = 0;
    }
}

// Cálculos de conversão
double semanasTotais = diasTotais / 7.0;
double mesesTotais = semanasTotais / SEMANAS_POR_MES;

Console.WriteLine("\n--- Relatório de Treinamento Jedi ---");
Console.WriteLine($"Total de horas: {horasAcumuladas}h");
Console.WriteLine($"Dias necessários: {diasTotais}");
Console.WriteLine($"Semanas necessárias: {semanasTotais:F1}");
Console.WriteLine($"Meses necessários: {mesesTotais:F1}");