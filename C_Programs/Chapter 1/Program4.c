#include<stdio.h>
int main()
{
	float far;
	float cel;
	printf("\nEnter the temperature in Farenheit:");
	scanf("%f",&far);
	cel=(far-32)/1.8;
	printf("\nThe temperature in Celcius:%f C",cel);
}
