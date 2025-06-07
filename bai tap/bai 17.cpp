#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float tong = 0;
	printf("vui long nhap so: ");
	scanf("%d",&n);
	for(int i = 1; i<= n ; i+=2){
		tong=tong+ sqrtf(i);
	}
	printf("ket qua:%.2f",tong);
} 
