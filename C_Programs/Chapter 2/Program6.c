#include<stdio.h>
#include<math.h>
int main()
{
	float t,v;
	float wcf;
	printf("Enter the Temperature:");
	scanf("%f",&t);
	printf("Enter the Wind velocity:");
	scanf("%f",&v);
	wcf=35.74+(0.6215*t)+(((0.4275*t)-35.75)*pow(v,0.16));
	printf("Wind chill factor present in air:%.2f",wcf);
}
