#include<stdio.h>
int main(){
	int n; 
	printf("vui long nhap thang trong nam:");
	scanf("%d",&n);
	switch(n){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("thang %d co 31 ngay",n);
			break; 
		case 4: case 6: case 9: case 11:
			printf("thang %d co 30 ngay",n);
			break;
		case 2:
			printf("thang %d co 28 ngay",n);
			break;
	}
}
