#include <iostream>
#include <vector>

bool PerfectSquare(int x) {
    int s = 0;
    int e = x;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long num = mid * mid;
        if (num == x)
            return true;
        if (num < x)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return false;
}

bool Fibonacci(int n) {
    return PerfectSquare(5 * n * n + 4) || PerfectSquare(5 * n * n - 4);
}

int main() {
    int num;
    std::cout << "Informe um número: ";
    std::cin >> num;

    if (Fibonacci(num))
        std::cout << num << " é um número Fibonacci" << std::endl;
    else
        std::cout << num << " não é um número Fibonacci" << std::endl;

    return 0;
}

