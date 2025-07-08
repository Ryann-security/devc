#include<stdio.h>
void nhap (int a[],int n){
	printf("nhap so:");
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
}
void tbc (int a[],int n){
	 float s=0;int d=0;
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]%3==0){
		s=s+a[i];d=d+1;
		}
	}
	printf("tbc %.2f\n",s/d);
}

void min(int a[],int n){
	int min =a[0];
	for(int i=0; i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("min cua so:%d",min);
}

int main(){
	int n;
	int a[100];
	printf("nhap so phan tu vao day:");
	scanf("%d",&n);
	nhap(a,n);
	tbc(a,n);
	min(a,n);
}
