#include<stdio.h>
int main(){
	int n; 
	float t = 100; 
	printf("nhap n vao:");
	scanf("%d",&n);
	for(int i = 1; i<=n; i++){
	t=t+1.0/ (i*(i+1));
}
	printf("ket qua cua T la: %.2f ",t);
}
