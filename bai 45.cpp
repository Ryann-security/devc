#include<stdio.h>
void nhap(int a[], int n){
	printf("a)nhap phan tu cua mang :\n");
	for(int i =0 ; i<n ; i++){
		scanf("%d",&a[i]);
	} 
} 

void min(int a[],int n ){
	int min = a[0];
	for(int i= 1; i<n; i++){
		if(a[i]<min)
		min= a[i];
	}
	printf("b)\nMin cua ham la: %d\n",min);
}
void sx(int a[],int n ){
	for(int i=0 ;i<n;i++){
		for(int j=i+1; j<n;j++){
			if (a[i]<a[j]){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("c)Mang sau khi sap xep giam dan : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
} 

void tbc(int a[],int n){
	int t=0 , d=0; 
	for(int i =0 ; i<n; i++){
		if(a[i]>0){
			t=t+a[i];
			d++ ;
		}
	}
	if(d>0){
		float tbc=(float)t/d;
		printf("d)tbc cac phan tu ko am la: %.2f",tbc);
	}
}

int main(){
	int n;
	int a[100];
	printf("nhap n vao ham: ");
	scanf("%d",&n);
	nhap(a,n);
	min(a,n);
	sx(a,n);
	tbc(a,n);
}
