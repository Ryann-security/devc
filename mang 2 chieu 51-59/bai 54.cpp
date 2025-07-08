#include <stdio.h>

int main() {
    int n;
    float a[100];
    float am[100], khong[100], duong[100];
    int i, demAm = 0, demKhong = 0, demDuong = 0;

    // Nhap so luong phan tu
    printf("Nhap so luong phan tu (n): ");
    scanf("%d", &n);

    // Nhap day so thuc
    printf("Nhap day so thuc:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);

        // Phan loai so am, 0, duong
        if (a[i] < 0)
            am[demAm++] = a[i];
        else if (a[i] == 0)
            khong[demKhong++] = a[i];
        else
            duong[demDuong++] = a[i];
    }

    // In ket qua theo yeu cau
    printf("Day sau khi sap xep theo yeu cau:\n");

    // In so am
    for (i = 0; i < demAm; i++)
        printf("%.2f ", am[i]);

    // In so 0
    for (i = 0; i < demKhong; i++)
        printf("%.2f ", khong[i]);

    // In so duong
    for (i = 0; i < demDuong; i++)
        printf("%.2f ", duong[i]);

    printf("\n");
    return 0;
}

