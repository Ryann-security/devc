#include <stdio.h>

void chuyen(int n, int b) {
    char a[50], kytu[] = "0123456789ABCDEF";
    int i = 0;

    if(n == 0) {
        printf("0");
        return;
    }

    while(n > 0) {
        a[i] = kytu[n % b];
        n = n / b;
        i++;
    }

    for(int j = i - 1; j >= 0; j--) {
        printf("%c", a[j]);
    }
}

int main() {
    int n, b;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap he co so b (2, 8, 16): ");
    scanf("%d", &b);

    if(b != 2 && b != 8 && b != 16) {
        printf("Chi ho tro he co so 2, 8, 16.\n");
        return 1;
    }

    printf("Doi co so %d la: ", b);
    chuyen(n, b);
    printf("\n");

    return 0;
}

