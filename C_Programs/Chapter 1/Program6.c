#include<stdio.h>
int main()
{
	int h=1189,w=841;
	int i,temp;
	for(i=0;i<9;i++)
	{
		printf("\nThe dimensions of A%d: %d x %d",i,h,w);
		temp=h;
		h=w;
		w=temp/2;
	}
}
