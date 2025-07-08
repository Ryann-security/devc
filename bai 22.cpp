#include<stdio.h>
//cac so hoan hao 6, 28, 496, 8128
//nguyen chi viet anh-75DCTTA2-75DCTT22203
int main(){
	int n, sum = 0; 
	printf("nhap so: ");
	scanf("%d",&n);
	for(int i = 1; i < n;i++){
		if(n % i == 0 ){
			sum=sum+i;
		}
	}
		if(sum == n){
			printf("%d la so hoan hao.\n",n);
		}
		else{
			printf("%d day ko phai so hoan hao.\n",n);
		}
	return 0;
}
