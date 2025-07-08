#include<stdio.h>
int main(){
	long long n;
    int sum = 0; 
	printf("nhap n de tinh tong:");
	scanf("%lld",&n);
	while(n!= 0){
		sum=sum+n%10;
		n=n/10;
	}
	printf("tong cua n sau khi nhap la:%d",sum);
	return 0;
}
