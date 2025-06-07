#include<stdio.h>
int main(){
	int hang_tram , hang_chuc , hang_dv;
	printf("sau day la cac so co 3 chu so co tong bang 9:\n");
	for(int i = 100; i<=999 ; i++){
	hang_tram = i / 100;
	hang_chuc = (i / 10) % 10;
	hang_dv = i % 10 ;
	if((hang_tram + hang_chuc + hang_dv) == 9){
		printf("%d\n",i);
		}
	}
}
