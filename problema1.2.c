using System;

class Program
{
    static void Main()
    {
        int INDICE = 13, SOMA = 0, K = 0;
        while (K < INDICE)
        {
            K = K + 1;
            SOMA = SOMA + K;
        }
        Console.WriteLine("O valor da variável SOMA é: " + SOMA);
    }
}
/*
A soma dos primeiros 13 números naturais pode ser calculada usando a fórmula:
SOMA = n(n+1)/2
 
onde n=13

SOMA = 13(13+1)/2 = (13×14)/2 = 182/2 = 91

Portanto, o valor da variável SOMA ao final do processamento será 91.
*/