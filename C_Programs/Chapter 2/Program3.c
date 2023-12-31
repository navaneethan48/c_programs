#include<stdio.h>
#include<math.h>
int main()
{
	int s1,s2,s3;
	float area;
	int sum;
	printf("\nEnter the sides of the triangle:");
	scanf("%d",&s1);
	scanf("%d",&s2);
	scanf("%d",&s3);
	sum=s1+s2+s3;
	area=sqrt(sum*(sum-s1)*(sum-s2)*(sum-s3));
	printf("The area of triangle is:%.2f",area);
}
