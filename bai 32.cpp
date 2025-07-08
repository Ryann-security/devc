#include<stdio.h>
int main(){
	int n;
	float t=100.0;
	float x;
	printf("nhap x vao phep tinh:");
	scanf("%f",&x);
	printf("nhap n vao phep tinh:");
	scanf("%d",&n);
	for(int i = 2;i<=n;i++){
		t=t+x/2;
	}
	printf("ket qua cua T voi %d la: %f",n);
}

