#include<stdio.h>
int snt(int n){
	if(n<2){
		return 0;
	}
	for(int i = 2;i*i<=n; i++){
		if(n%i== 0){
		return 0; 
		}
	}
	return n;
}
int main(){
	int n; 
	printf("nhap n vao day:");
	scanf("%d",&n);
	printf("cac so nguyen to nho hon %d la:\n",n);
	for(int i = 2 ; i<n; i++){
		if(snt(i))
		printf("%d",i);
	}
	printf("\n");
	return 0; 
}
