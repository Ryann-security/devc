#include<stdio.h>
int snt(int n){
    if(n<2) return 0;
    for(int i=2; i*i<=n; ++i){
        if(n % i == 0)
            return 0;
    }
    return 1;
    }
    
int main(){
    int n = 17;
    if(snt(n)==1)
    printf("day la so nt %d",n );
	  else
    printf("day ko phai so nt");
	}


