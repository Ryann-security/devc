#include<stdio.h>

int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	if(n<=1){
		printf("khong co snt %d\n",n);
		return 0;
	}
	
	printf("cac snt cua %d=",n);
	
	int i=2;
	int a=1;
	while(n>1){
		while(n%i==0){
			if(!a) 
			printf("x");
			printf("%d",i);
			n=n/i;
			a=0;
		}
		i++;
	}
	
	printf("\n");
	return 0;
}
