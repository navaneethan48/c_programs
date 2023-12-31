#include<stdio.h>
int main()
{
	int a;
	int i,t=0;
	printf("\n Enter a five digit number:");
	scanf("%d",&a);
	while(a!=0)
	{
		t=t*10;
		t=t+a%10;
		a=a/10;
	}
	printf("The reverse of the number is:%d",t);
}
