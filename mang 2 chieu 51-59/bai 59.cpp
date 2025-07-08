#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int b[10000];
    int i, j, k = 0, temp;

    // Nhap so hang va cot
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    // Nhap ma tran
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Luu tat ca phan tu vao mang mot chieu b[]
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            b[k++] = a[i][j];
        }
    }

    // Sap xep mang b[] giam dan (bubble sort)
    for (i = 0; i < k - 1; i++) {
        for (j = i + 1; j < k; j++) {
            if (b[i] < b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // In ma tran ban dau
    printf("\nMa tran ban dau:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }

    // Gan lai gia tri da sap xep vao ma tran
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            a[i][j] = b[k++];
        }
    }

    // In ma tran da sap xep
    printf("\nMa tran sau khi sap xep giam dan theo hang va cot:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

