#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return 1;

    int f0 = 1, f1 = 1, fn = 0;
    for (int i = 2; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }

    return fn;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("So Fibonacci thu %d la: %d\n", n, fibonacci(n));
    return 0;
}

