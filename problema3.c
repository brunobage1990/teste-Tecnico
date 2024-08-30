#include <stdio.h>

#define TAM 30 // Tamanho do array (dias do mês)

int main() {
    int faturamento[TAM] = {1000, 1200, 1500, 0, 2000, 1800, 0, 2500, 2200, 0, 3000, 2800, 0, 3500, 3200, 0, 4000, 3800, 0, 4500, 4200, 0, 5000, 4800, 0, 5500, 5200, 0, 6000, 5800};
    int soma = 0, diasSuperiorMedia = 0, menor = 1000000, maior = 0;

    // Cálculo da soma e dos valores mínimo e máximo
    for (int i = 0; i < TAM; i++) {
        if (faturamento[i] > 0) {
            soma += faturamento[i];
            if (faturamento[i] < menor)
                menor = faturamento[i];
            if (faturamento[i] > maior)
                maior = faturamento[i];
        }
    }

    // Cálculo da média
    double media = (double)soma / (TAM - (TAM / 7)); // Ignorando finais de semana e feriados

    // Contagem de dias com faturamento superior à média
    for (int i = 0; i < TAM; i++) {
        if (faturamento[i] > media && faturamento[i] > 0)
            diasSuperiorMedia++;
    }

    printf("Menor valor de faturamento: %d\n", menor);
    printf("Maior valor de faturamento: %d\n", maior);
    printf("Dias com faturamento superior à média: %d\n", diasSuperiorMedia);

    return 0;
}

