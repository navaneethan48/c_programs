#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter a five digit number:");
	scanf("%d",&a);
	int q,w,e,r,t,y;
	q=a%10;
	w=(a%100)/10;
	e=(a%1000)/100;
	r=(a%10000)/1000;
	t=a/10000;
	y=q+w+e+r+t;
	printf("\nThe sum of the digits is:%d",y);
}
