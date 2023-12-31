#include<stdio.h>
int main()
{
	int c,d,t;
	printf("Enter two numbers:");
	scanf("%d %d",&c,&d);
	t=d;
	d=c;
	c=t;
	printf("\n The interchanged values for c and d are %d %d",c,d);
}
