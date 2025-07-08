#include<stdio.h>
#include<string.h>
struct nv{
	int manv;
	char hoten[50];
	char phongban[50];
};
int main(){
	int n,i;
	printf("nhap so nv:");
	scanf("%d",&n);
	struct nv a[100];
	for(int i =0;i<n;i++){
		printf("nv thu %d:",i+1);
		printf("\nManv:");
			scanf("%d",&a[i].manv);
		printf("ho ten nv\n ");
		fflush(stdin);gets(a[i].hoten);
		printf("phong ban: \n");
			fflush(stdin);gets(a[i].phongban);
	}
	printf("danh sach nhan vien\n");
	printf("%-10s %-10s %-15s\n","manv","hoten","phongban");
	for(int i=0;i<n;i++){
		if (strcmp(a[i].phongban, "Ke toan") == 0 || strcmp(a[i].phongban, "ke toan") == 0) {
			printf("%-10d %-10s %-15s \n",a[i].manv,a[i].hoten,a[i].phongban);
		}
	}
}
