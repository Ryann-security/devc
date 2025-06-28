#include<stdio.h>
#include<string.h>
struct sv{
	char hoten[50];
	int namsinh;
	float diemtb;
};
int main(){
	int n,i; 
	printf("nhap so sv:");
	scanf("%d",&n);
	struct sv a[50];
	for(int i=0;i<n;i++){
		printf("nhap sv thu:%d ",i+1);
		printf("\nHo ten sv:");fflush(stdin);gets(a[i].hoten);
		printf("\nNam sinh:");scanf("%d",&a[i].namsinh);
		printf("\ndiemtb:");scanf("%f",&a[i].diemtb);
	}
		printf("danh sach sv duoi 20 tuoi tu 2015\n");
			printf("%-10s %-10s %-10s %-10s\n","ho ten","nam sinh","diemtb","tuoi");
	for(int i=0;i<n;i++){
		int tuoi= 2015-a[i].namsinh;
		if(tuoi<=20){
				printf("%-10s %-10d %-10f %-10d\n",a[i].hoten,a[i].namsinh,a[i].diemtb,tuoi);
			}
		}
	}

