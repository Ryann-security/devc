#include <stdio.h>

int main() {
    int n, m, k;
    float a[100][100];
    float tongHang = 0, tongCot = 0;

    // Nhap so hang va cot cua ma tran
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    // Nhap cac phan tu cua ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Nhap chi so k
    do {
        printf("Nhap so nguyen k (0 <= k < n va k < m): ");
        scanf("%d", &k);
        if (k < 0 || k >= n || k >= m) {
            printf("Chi so k khong hop le. Nhap lai.\n");
        }
    } while (k < 0 || k >= n || k >= m);

    // Tinh tong cac phan tu tren hang k
    for (int j = 0; j < m; j++) {
        tongHang += a[k][j];
    }

    // Tinh tong cac phan tu tren cot k
    for (int i = 0; i < n; i++) {
        tongCot += a[i][k];
    }

    // In lai ma tran vua nhap
    printf("\nMa tran vua nhap:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%8.2f ", a[i][j]);
        }
        printf("\n");
    }

    // In ket qua tong hang va cot k
    printf("\nTong cac phan tu tren hang %d: %.2f\n", k, tongHang);
    printf("Tong cac phan tu tren cot %d: %.2f\n", k, tongCot);

    return 0;
}

