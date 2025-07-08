#include <stdio.h>

int main() {
    int n;
    float a[100][100];
    float tongCheoChinh = 0, tongCheoPhu = 0;

    // Nhap cap ma tran vuong n
    printf("Nhap cap ma tran vuong n: ");
    scanf("%d", &n);

    // Nhap cac phan tu cua ma tran
    printf("Nhap cac phan tu ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Tinh tong cac phan tu tren duong cheo chinh va duong cheo phu
    for (int i = 0; i < n; i++) {
        tongCheoChinh += a[i][i];           // Phan tu tren duong cheo chinh
        tongCheoPhu += a[i][n - 1 - i];    // Phan tu tren duong cheo phu
    }

    // In lai ma tran vua nhap
    printf("\nMa tran vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f ", a[i][j]);
        }
        printf("\n");
    }

    // In ket qua tong duong cheo chinh va duong cheo phu
    printf("\nTong cac phan tu tren duong cheo chinh: %.2f\n", tongCheoChinh);
    printf("Tong cac phan tu tren duong cheo phu: %.2f\n", tongCheoPhu);

    return 0;
}

