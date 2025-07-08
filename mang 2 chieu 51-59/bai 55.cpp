#include <stdio.h>

int main() {
    int n, m;
    float a[100][100];
    float tongVien = 0;

    // Nhap so hang va cot
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    // Nhap cac phan tu cua ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Tinh tong cac phan tu tren duong vien
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Neu phan tu nam tren vien (hang dau, hang cuoi, cot dau, cot cuoi)
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                tongVien += a[i][j];
            }
        }
    }

    // In lai ma tran
    printf("\nMa tran vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%6.2f ", a[i][j]);
        }
        printf("\n");
    }

    // In tong duong vien
    printf("\nTong cac phan tu tren duong vien cua ma tran: %.2f\n", tongVien);

    return 0;
}

