#include<stdio.h>
//nguyen chi viet anh-75DCTT22203-75DCTTA2
int main(){
	char hoten[100];
	float tongdiem;
	char xeploai[20];
	printf("nhap ho ten sinh vien: ");
	fgets(hoten , sizeof(hoten),stdin);
	
	printf ("nhap tong diem: ");
	scanf("%f", &tongdiem);
	printf("\nThong tin sinh vien\n");
	printf("ho ten: %s",hoten);
	if(tongdiem < 6){
		printf("xep loai: kem");
	}	
	else if(tongdiem < 7){
		printf("xep loai: tb ");
	}
	else if(tongdiem < 8){
		printf("xep loai: kha");
	}
	else{
		printf("xep loai: gioi");
	}
	return 0;
}
