#include <stdio.h>

void nhap(int a[], int n){
    printf("Nhap phan tu cua mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

void ta(int a[], int n){
    int tong = 0; 
    for (int i = 0; i < n; i++){
        if(a[i] < 0){
            tong += a[i];
        }
    }
    printf("Tong cac so am trong mang la: %d\n", tong);
}

void td(int a[], int n){
    int tong = 0; 
    for (int i = 0; i < n; i++){
        if(a[i] > 0){
            tong += a[i];
        }
    }
    printf("Tong cac so duong trong mang la: %d\n", tong);
}
void in(int a[],int n){
	for(int i=0; i<n; i++){
		if(a[i]%6==0 && a[i]%10==2){
		printf("so chia het cho 6 tan cung 2:%d\n",a[i]);
		}
	}	
}


int main(){
    int n;
    int a[100];
    printf("Nhap n vao ham: ");
    scanf("%d", &n);
    nhap(a, n);
    ta(a, n);
    td(a,n);
    in(a,n);
    return 0;
}

