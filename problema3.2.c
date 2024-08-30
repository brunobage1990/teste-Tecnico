using System;

class Program
{
    static void Main()
    {
        int[] faturamento = { 1000, 1200, 1500, 0, 2000, 1800, 0, 2500, 2200, 0, 3000, 2800, 0, 3500, 3200, 0, 4000, 3800, 0, 4500, 4200, 0, 5000, 4800, 0, 5500, 5200, 0, 6000, 5800 };
        int soma = 0, diasSuperiorMedia = 0, menor = 1000000, maior = 0;
        int tamanho = faturamento.Length;

        // Cálculo da soma e dos valores mínimo e máximo
        for (int i = 0; i < tamanho; i++)
        {
            if (faturamento[i] > 0)
            {
                soma += faturamento[i];
                if (faturamento[i] < menor)
                    menor = faturamento[i];
                if (faturamento[i] > maior)
                    maior = faturamento[i];
            }
        }

        // Cálculo da média
        double media = (double)soma / (tamanho - (tamanho / 7)); // Ignorando finais de semana e feriados

        // Contagem de dias com faturamento superior à média
        for (int i = 0; i < tamanho; i++)
        {
            if (faturamento[i] > media && faturamento[i] > 0)
                diasSuperiorMedia++;
        }

        Console.WriteLine("Menor valor de faturamento: " + menor);
        Console.WriteLine("Maior valor de faturamento: " + maior);
        Console.WriteLine("Dias com faturamento superior à média: " + diasSuperiorMedia);
    }
}

