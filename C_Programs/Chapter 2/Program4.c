#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,y;
	float r,pi;
	printf("Enter the co-ordinate X:");
	scanf("%d",&x);
	printf("Enter the co-ordinate Y:");
	scanf("%d",&y);
	r=sqrt((x*x)+(y*y));
	pi=atan(y/x);
	printf("The Polar Co-ordinates is (%.2f,%.2f)",r,pi);
	
}
