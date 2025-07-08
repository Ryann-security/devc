#include<stdio.h>
#include<string.h>
struct sv{
	int masv;
	char hoten[50];
	float td;
};
int main(){
	int n,i;
	printf("nhap so sinh vien:");
	scanf("%d",&n);
	struct sv a[50];
	for(int i=0; i<n;i++){
		printf("sv thu:%d",i+1);
		printf("\nMasv:");scanf("%d",&a[i].masv);
		printf("\nHoten:");fflush(stdin);gets(a[i].hoten);
		printf("\nTd:");scanf("%f",&a[i].td);
	}
	printf("Danh sach sv dat loai gioi\n");
	printf("%-10s %-10s %-10s \n","Masv","Hoten","tongdiem");
	for(int i=0;i<n;i++){
		if(a[i].td >=8){
			printf("%-10d %-10s %-10f \n",a[i].masv,a[i].hoten,a[i].td);
		}
	}
	printf("Danh sach sv dat loai kha\n");
	printf("%-10s %-10s %-10s \n","Masv","Hoten","tongdiem");
	for(int i=0; i<n;i++){
		if(a[i].td<8 && a[i].td>=7){
			printf("%-10d %-10s %-10f \n",a[i].masv,a[i].hoten,a[i].td);
		}
	}
}
