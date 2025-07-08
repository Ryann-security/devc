#include<stdio.h>
void nhap(int a[], int n){
	printf("a)nhap phan tu cua mang :\n");
	for(int i =0 ; i<n ; i++){
		scanf("%d",&a[i]);
	} 
} 
void xuat(int a[],int n ){
	printf ("b)mang sau nhap la:");
	for(int i =0; i<n ; i++){
		printf("%d ",a[i]); 
	}
} 
void max(int a[], int n){
	int max = a[0];
	for(int i=1; i<n ; i++){
		if(a[i]> max) 
		max = a[i];
	}
		printf("\nC)Gia tri lon nhat:%d\n ",max);
}
void sx(int a[],int n){
	for(int i = 0; i<n-1 ; i++){
		for(int j = i +1 ; j < n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("d)Mang sau khi sap xep tang dan: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void tbc(int a[],int n){
	int s=0 ,d=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
		s=s+a[i];
		d=d+1;
		}
	}
	printf("\nTrung binh cong so am la: %d",s/d);
}
//xem ky sx
int main(){
	int n,i; 
	int a[100];
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	nhap(a, n);
	xuat(a, n);
	max(a,n);
	sx(a,n);
	tbc(a,n);
} 
