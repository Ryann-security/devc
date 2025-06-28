#include<stdio.h>
#include<string.h>

struct sach {
	char masach[100];
	char tensach[100];
	char tacgia[100];
	int namxb;
};
int main(){
	int n; 
	struct sach a[100];
	printf("nhap so phan tu:");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("quyen sach so %d:",i+1);
		printf("\nma sach:");fflush(stdin);gets(a[i].masach);
		printf("\nten sach:");fflush(stdin);gets(a[i].tensach);
		printf("\ntac gia:");fflush(stdin);gets(a[i].tacgia);
		printf("\nnam xuat ban:");scanf("%d",&a[i].namxb);
	}
	printf("\n cac sach co ten 'tin hoc dai cuong' \n");
	printf("%-20s %-20s %-20s %-20s\n","masach","tensach","tacgia","namxb");
	int dem = 0;
	for(int i =0; i<n ; i++){
		if(strcmp(a[i].tensach,"tin hoc dai cuong")==0){
			printf("%-20s %-20s %-20s %-20d\n",a[i].masach,a[i].tensach,a[i].tacgia,a[i].namxb);
			dem++;
		}
	}
	if(dem==0){
		printf("no");
	}
}
