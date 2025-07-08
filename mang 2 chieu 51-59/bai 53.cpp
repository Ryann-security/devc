#include <stdio.h>
#include <math.h>

// Ham kiem tra mot so co phai la so chinh phuong hay khong
int laSoChinhPhuong(int x) {
    int can = (int)sqrt(x);
    return (can * can == x);
}

// Ham chinh
int main() {
    int n, i;
    int a[100];
    int coChinhPhuong = 0;
    int max = -1, min = -1;

    // Nhap so phan tu
    printf("Nhap so luong phan tu (n): ");
    scanf("%d", &n);

    // Nhap day so nguyen duong
    printf("Nhap cac so nguyen duong:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Kiem tra va in cac so chinh phuong
    printf("Cac so chinh phuong trong day la: ");
    for (i = 0; i < n; i++) {
        if (laSoChinhPhuong(a[i])) {
            printf("%d ", a[i]);

            // Cap nhat min va max chinh phuong
            if (coChinhPhuong == 0) {
                min = a[i];
                max = a[i];
                coChinhPhuong = 1;
            } else {
                if (a[i] < min) min = a[i];
                if (a[i] > max) max = a[i];
            }
        }
    }

    if (coChinhPhuong) {
        printf("\nSo chinh phuong nho nhat: %d\n", min);
        printf("So chinh phuong lon nhat: %d\n", max);
    } else {
        printf("\nKhong co so chinh phuong trong day.\n");
    }

    return 0;
}

