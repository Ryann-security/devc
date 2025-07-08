#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int len, i;
    int doiXung = 1; // Gi? s? xâu là ð?i x?ng
    int demX = 0;

    // Nh?p xâu
    printf("Nhap xau: ");
    fgets(s, sizeof(s), stdin);
    // Xóa k? t? xu?ng d?ng n?u có
    s[strcspn(s, "\n")] = 0;

    len = strlen(s);

    // Ki?m tra xâu có ph?i ð?i x?ng không
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

    // Ð?m s? k? t? 'X' (ch? hoa X) xu?t hi?n trong xâu
    for (i = 0; i < len; i++) {
        if (s[i] == 'X') {
            demX++;
        }
    }

    printf("So ky tu 'X' xuat hien trong xau: %d\n", demX);

    return 0;
}

