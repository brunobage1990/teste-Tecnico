using System;

class Program
{
    static void InverteString(char[] str)
    {
        int tamanho = str.Length;
        int inicio = 0;
        int fim = tamanho - 1;

        while (inicio < fim)
        {
            char temp = str[inicio];
            str[inicio] = str[fim];
            str[fim] = temp;
            inicio++;
            fim--;
        }
    }

    static void Main()
    {
        string input = Console.ReadLine();
        char[] str = input.ToCharArray();
        InverteString(str);
        Console.WriteLine(new string(str));
    }
}
