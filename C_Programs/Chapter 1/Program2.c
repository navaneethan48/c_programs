#include<stdio.h>
int main()
{
	float km,m,f;
	float in,cm;
	printf("Enter the distance in Kilometer:");
	scanf("%f",&km);
	m=km*1000;
	f=3.28*m;
	in=12*f;
	cm=m*100;
	printf("\nThe distance in Meter: %.2f",m);
	printf("\nThe distance in Feet: %.2f",f);
	printf("\nThe distance in inches: %.2f",in);
	printf("\nThe distance in Centimeter: %.2f",cm);
}
