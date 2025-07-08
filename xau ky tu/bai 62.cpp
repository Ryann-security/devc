#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int len, i;
    int demDauCach = 0;

    // Nhap xau
    printf("Nhap xau: ");
    fgets(s, sizeof(s), stdin);
    // Xoa ky tu xuong dong neu co
    s[strcspn(s, "\n")] = 0;

    len = strlen(s);

    // Dem so ky tu dau cach trong xau
    for (i = 0; i < len; i++) {
        if (s[i] == ' ') {
            demDauCach++;
        }
    }
    printf("So ky tu dau cach xuat hien trong xau: %d\n", demDauCach);

    // In xau dao nguoc
    printf("Xau dao nguoc la: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}

