#include<stdio.h>
int main()
{
	float l,b,r;
	float area, peri;
	printf("\nEnter the length of the rectangle:");
	scanf("%f",&l);
	printf("\nEnter the breadth of the rectangle:");
	scanf("%f",&b);
	printf("\nEnter the radius of the circle:");
	scanf("%f",&r);
	area=l*b;
	peri=2*(l+b);
	printf("\nArea of rectangle:%.2f",area);
	printf("\nPerimeter of rectangle:%.2f",peri);
	area=3.14*r*r;
	peri=2*3.14*r;
	printf("\nArea of Circle:%.2f",area);
	printf("\nCircumference of Circle:%.2f",peri);
}
