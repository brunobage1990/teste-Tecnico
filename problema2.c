#include <stdio.h>

int isPerfectSquare(int x) {
    int s = 0;
    int e = x;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long num = mid * mid;
        if (num == x)
            return 1;
        if (num < x)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return 0;
}

int isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    if (isFibonacci(num))
        printf("%d é um número Fibonacci\n", num);
    else
        printf("%d não é um número Fibonacci \n", num);
    return 0;
}

