#include <stdio.h>

// a. Hàm tính t?ng các ph?n t? có t?n cùng là 6
int sumEndingWith6(int a[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] % 10 == 6 || a[i][j] % 10 == -6)
                sum += a[i][j];
    return sum;
}

// b. Hàm t?m ph?n t? l?n nh?t trong m?ng
int findMax(int a[][100], int n, int m) {
    int max = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > max)
                max = a[i][j];
    return max;
}

// c + g. Hàm ð?m s? ph?n t? ch?n chia h?t cho 3
int countEvenDiv3(int a[][100], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] % 2 == 0 && a[i][j] % 3 == 0)
                count++;
    return count;
}

// d. Hàm tính t?ng hàng th? 2
int sumRow2(int a[][100], int m) {
    int sum = 0;
    for (int j = 0; j < m; j++)
        sum += a[1][j];
    return sum;
}

//e  
float avgCol2(int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][1];
    return (float)sum / n;
}


int sumMainDiagonal(int a[][100], int n, int m) {
    int sum = 0;
    int size = (n < m) ? n : m;
    for (int i = 0; i < size; i++)
        sum += a[i][i];
    return sum;
}


int main() {
    int n, m;
    int a[100][100];

    // Nh?p kích thý?c
    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    // Nh?p m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

  
    printf("\nKET QUA:\n");
    printf("a. Tong cac phan tu co so tan cung bang 6: %d\n", sumEndingWith6(a, n, m));
    printf("b. Phan tu lon nhat trong mang: %d\n", findMax(a, n, m));
    printf("c. So phan tu chan chia het cho 3: %d\n", countEvenDiv3(a, n, m));

    if (n >= 2)
        printf("d. Tong cac phan tu o hang thu 2: %d\n", sumRow2(a, m));
    else
        printf("d. Khong co hang thu 2 de tinh tong.\n");

    if (m >= 2)
        printf("e. Trung binh cong cac phan tu cot 2: %.2f\n", avgCol2(a, n));
    else
        printf("e. Khong co cot thu 2 de tinh trung binh.\n");

    printf("f. Phan tu lon nhat trong mang: %d\n", findMax(a, n, m));  // gi?ng b
    printf("g. So phan tu chan chia het cho 3: %d\n", countEvenDiv3(a, n, m));  // gi?ng c
    printf("h. Tong cac phan tu tren duong cheo chinh: %d\n", sumMainDiagonal(a, n, m));

    return 0;
}

