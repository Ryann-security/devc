#include<stdio.h>
int main(){
	int a , b ,c ;
	printf("cac kha nang ket hop tien de co 200.000 VND:\n");
	for(a = 0; a <= 20 ; a++){
		for(b =0 ; b <= 10; b++){
			for(c =0 ; c <= 4; c++){
			int tong= a * 10000 + b * 20000 + c * 50000;
			if (tong == 200000){
			printf("10k:%d,20k:%d,50k:%d\n",a,b,c);
				}
			}
		}
	}
}
