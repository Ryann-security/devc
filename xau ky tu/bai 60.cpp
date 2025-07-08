#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    int len, i;
    int doiXung = 1; // Gi? s? là ð?i x?ng

    // Nhap xau
    printf("Nhap xau: ");
    fgets(s, sizeof(s), stdin);
    // Xoa ky tu xuong dong neu co
    s[strcspn(s, "\n")] = 0;

    len = strlen(s);

    // Kiem tra doi xung
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

    // Dao nguoc xau
    printf("Xau dao nguoc la: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    // Chuyen xau thanh chu in hoa
    for (i = 0; i < len; i++) {
        s[i] = toupper((unsigned char)s[i]);
    }
    printf("Xau sau khi chuyen thanh chu in hoa: %s\n", s);

    return 0;
}

