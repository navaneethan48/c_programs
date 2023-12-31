#include<stdio.h>
int main()
{
	int bs;
	float hr,da,gs;
	printf("Enter the Basic salary of Ramesh:");
	scanf("%d",&bs);
	hr=0.20*bs;
	da=0.40*bs;
	gs=bs+hr+da;
	printf("The Gross Salary of Ramesh is %.2f",gs);
}
