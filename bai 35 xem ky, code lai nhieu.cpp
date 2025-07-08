#include<stdio.h>
int main(){
	int n; 
	double t=99;
	printf("nhap n vao bieu thuc:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(i%2==1){
			t=t-1.0/(10*i);
		}
		else{
			t=t+1.0/ (10*i);
		}
	}
	printf("gia tri t la: %.2lf",t);
}
