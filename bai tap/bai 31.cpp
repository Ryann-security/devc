#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double t=0 ; 
	printf("nhap n:");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		t=t+sqrt(i);
	}
	printf("tong a bang: %.2lf",t);
	
}
