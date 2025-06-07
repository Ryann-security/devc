#include<stdio.h>
#include<math.h> 
main()
{ float a,b,c;
printf("nhap a,b,c: ");scanf("%f%f%f" ,&a,&b,&c);
if(a+b<=c or b+c<=a|| c+a<=b)
	printf (" ko la tam giac");
else {
	if(a==b and b==c) printf("tam giac deu");
	else 
		if(a*a==b*b+c*c||c*c==a*a+b*b||b*b==a*a+c*c)
	printf("tam giac vuong");
	else printf("tam giac thuong");
	float cv=a+b+c;float p=cv/2;
	float dt=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\nchu vi la: %.2f",cv);
	printf("\ndien tich la: %.2f",dt);
}
}

