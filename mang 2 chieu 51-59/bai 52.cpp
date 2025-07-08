#include <stdio.h>

// Ham a - In cac phan tu tren duong cheo chinh
void inCheoChinh(int a[100][100], int n) {
    printf("a) Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
}

// Ham b - Tinh tong cac phan tu tren duong cheo chinh
void tongCheoChinh(int a[100][100], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i][i];
    }
    printf("b) Tong cac phan tu tren duong cheo chinh: %d\n", tong);
}

// Ham c - In cac phan tu tren duong cheo phu
void inCheoPhu(int a[100][100], int n) {
    printf("c) Cac phan tu tren duong cheo phu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][n - 1 - i]);
    }
    printf("\n");
}

// Ham d - Tinh tong cac phan tu tren duong cheo phu
void tongCheoPhu(int a[100][100], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i][n - 1 - i];
    }
    printf("d) Tong cac phan tu tren duong cheo phu: %d\n", tong);
}

int main() {
    int n;
    int a[100][100];

    // Nhap kich thuoc ma tran
    printf("Nhap n (kich thuoc ma tran vuong n x n): ");
    scanf("%d", &n);

    // Nhap cac phan tu cua ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    // Goi cac ham de xu ly va in ket qua
    inCheoChinh(a, n);
    tongCheoChinh(a, n);
    inCheoPhu(a, n);
    tongCheoPhu(a, n);

    return 0;
}

