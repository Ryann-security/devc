//#include<stdio.h>
//bai 11
//int main(){
//	int a, b;
//	printf("nhap a va b:");
//	scanf("%d %d",&a ,&b);
//	while(a!=b){
//		if(a > b)
//			a=a-b;
//		else 
//			b=b-a;
//	}
//	printf("ucln = %d",a);
//}


#include <stdio.h>
// bai 1
int ucln(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else 
            b = b - a;
    }
    return a; 
}
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    int ketqua1 = ucln(a, b);
    int ketqua2 = bcnn(a, b);

    printf("UCLN = %d\n", ketqua1);
    printf("BCNN = %d\n", ketqua2);

    return 0;
}


