#include<stdio.h>
#include<string.h>
struct nv{
	int manv;
	char hoten[50];
	int tuoi;
};
int main(){
	int n,i;
	printf("nhap so nhan vien: ");
	scanf("%d",&n);
	struct nv a[100];
	for(int i =0; i<n; i++){
		printf("nhap nhan vien thu: %d",i+1);
		printf("\nMa nhan vien:");scanf("%d",&a[i].manv);
		printf("\nho ten nv:");fflush(stdin);gets(a[i].hoten);
		printf("\ntuoi:");scanf("%d",&a[i].tuoi); 
	}
	printf("cac nhan vien den tuoi nghi huu:\n");
	printf("\n%-10s %-10s %-10s","manv","hoten","tuoi");
	for(int i = 0 ; i<n; i++){
		if(a[i].tuoi>=55){
			printf("\n%-10d %-10s %-10d",a[i].manv,a[i].hoten,a[i].tuoi);
		}
	}	
}
