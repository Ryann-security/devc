#include<stdio.h>
int main(){
	int n; 
	float x ; 
	float t = 100.0; 
	printf("nhap n:");
	scanf("%d",&n);
	printf("nhap x:");
	scanf("%f",&x);
	for(int i = 1 ;i<=n ; i++){
		if(i%2 == 1){
			t=t+x/(10*i);
		}
		else{
			t=t-x/(10*i);
		}
	}
	printf("ket qua:%.2f",t);
}
