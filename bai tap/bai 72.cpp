#include<stdio.h>
#include<string.h>
struct sach{
	char masach[100];
	char tensach [100];
	char tacgia [100];
	int namxb;
};
void sx(struct sach a[], int n) {
    struct sach temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(a[i].tensach, a[j].tensach) > 0) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void in(struct sach a[], int n) {
    printf("\n%-20s %-20s %-20s %-20s\n", "Ma sach", "Ten sach", "Tac gia", "Nam XB");
    for(int i = 0; i < n; i++) {
        printf("%-20s %-20s %-20s %-10d\n",
               a[i].masach, a[i].tensach, a[i].tacgia, a[i].namxb);
    }
}
int main(){
	int n;
	struct sach a[100];
	printf("nhap so phan tu:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("quyen sach so %d:",i+1);
	printf("\nma sach:");fflush(stdin);gets(a[i].masach);
	printf("\nten sach:");fflush(stdin);gets(a[i].tensach);
	printf("\nten tac gia:");fflush(stdin);gets(a[i].tacgia);
	printf("\nnam xb:");scanf("%d",&a[i].namxb);
	}
	sx(a,n);
	in(a,n);
}
