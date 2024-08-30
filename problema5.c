#include <stdio.h>
#include <string.h>

void inverteString(char* str) {
    int tamanho = strlen(str);
    char* inicio = str;
    char* fim = str + tamanho - 1;

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove o caractere de nova linha

    inverteString(str);
    printf("Inverted string: %s\n", str);

    return 0;
}

