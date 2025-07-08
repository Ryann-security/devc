#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int len, i;
    int doiXung = 1; // Gi? s? x�u l� �?i x?ng
    int demX = 0;

    // Nh?p x�u
    printf("Nhap xau: ");
    fgets(s, sizeof(s), stdin);
    // X�a k? t? xu?ng d?ng n?u c�
    s[strcspn(s, "\n")] = 0;

    len = strlen(s);

    // Ki?m tra x�u c� ph?i �?i x?ng kh�ng
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            doiXung = 0;
            break;
        }
    }

    if (doiXung)
        printf("Xau la doi xung.\n");
    else
        printf("Xau khong phai la doi xung.\n");

    // �?m s? k? t? 'X' (ch? hoa X) xu?t hi?n trong x�u
    for (i = 0; i < len; i++) {
        if (s[i] == 'X') {
            demX++;
        }
    }

    printf("So ky tu 'X' xuat hien trong xau: %d\n", demX);

    return 0;
}

