#include<stdio.h>
int main(){
	int n; 
	float x;
	float t = 10.0;
		printf("nhap n:");
		scanf("%d",&n);
		printf("nhap x:");
		scanf("%f",&x);
	for(int i =2;i<= n; i++){
		t=t+i/x;
	}
	printf("ket qua:%.2f",t);
}
