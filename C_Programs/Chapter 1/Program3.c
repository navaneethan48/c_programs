#include<stdio.h>
int main()
{
 	float s[5];
 	float total;
 	int i;
 	float avg;
 	for(i=0;i<5;i++)
 	{
 		printf("\nEnter the subject %d:",i+1);
		scanf("%f",&s[i]);	
	}
	total=s[0]+s[1]+s[2]+s[3]+s[4];
	printf("\nThe Aggregate Marks: %.2f",total);
	avg=total/5;
	printf("\nThe Percentage Marks: %.2f%",avg);
}
