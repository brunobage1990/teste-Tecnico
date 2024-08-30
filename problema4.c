#include <stdio.h>

int main() {
    double faturamento[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    char estados[] = {"SP", "RJ", "MG", "ES", "Outros"};
    double total = 0;

    // Cálculo do total
    for (int i = 0; i < 5; i++) {
        total += faturamento[i];
    }

    // Cálculo e impressão dos percentuais
    for (int i = 0; i < 5; i++) {
        double percentual = (faturamento[i] / total) * 100;
        printf("Estado %s: %.2f%%\n", estados[i], percentual);
    }

    return 0;
}

