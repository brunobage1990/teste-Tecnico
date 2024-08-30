#include <iostream>
#include <string>

void inverteString(std::string& str) {
    int tamanho = str.length();
    char* inicio = &str;
    char* fim = &str[tamanho - 1];

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}

int main() {
    std::string str;
    std::cout << "Escreva os caracteres: ";
    std::cin >> str;

    inverteString(str);
    std::cout << "Inversão de caracteres: " << str << std::endl;

    return 0;
}
