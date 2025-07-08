#include<stdio.h>
#include<string.h>
struct sv{
	int masv;
	char ht[15];
	float tong; 
};
int main(){
	int n,i;
	printf("nhap so sinh vien: ");
	scanf("%d",&n);
	struct sv a[10];
	for(int i=0;i<n; i++){
		printf("nhap sinh vien thu %d ",i+1);
		printf("\n nhap masv:");
			scanf("%d",&a[i].masv);
		printf("\n nhap ho ten:");
			fflush(stdin);gets(a[i].ht);
		printf("\n nhap tong diem:");scanf("%f",&a[i].tong);	
	}
	float max=a[0].tong;
	for(int i=1;i<n;i++){
		if(a[i].tong > max )
		max = a[i].tong;
	}
	printf("Danh sach sinh vien co diem cao nhat \n");
	printf("%-10s %-15s %-15s\n", "MA SV","HO TEN","TONG DIEM");
		for(int i=0;i<n; i++){
			if(a[i].tong == max){
				printf("%-10d %-15s %.2f\n", a[i].masv,a[i].ht,a[i].tong);
			}
		}
	printf("danh sach sinh vien diem >17\n");
	printf("%-10s %-15s %-15s\n","MA SV", "HO TEN","TONG DIEM");
		for(int i =0 ;i<n;i++){
			if(a[i].tong>=17){
				printf("%-10d %-15s %.2f\n", a[i].masv,a[i].ht,a[i].tong);
			}
	}
}
