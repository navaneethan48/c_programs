#include<stdio.h>
int main()
{
	int rs;
	int hun=0, fif=0,twe=0,ten=0,fiv=0,two=0,one=0;
	printf("Enter the Amount:");
	scanf("%d",&rs);
	if(rs>=100)
	{
		hun=rs/100;
		rs=rs%100;
	}
	if(rs>=50)
	{
		fif=rs/50;
		rs=rs%50;
	}
	if(rs>=20)
	{
		twe=rs/20;
		rs=rs%20;
	}
	if(rs>=10)
	{
		ten=rs/10;
		rs=rs%10;
	}
	if(rs>=5)
	{
		fiv=rs/5;
		rs=rs%5;
	}
	if(rs>=2)
	{
		two=rs/2;
		rs=rs%2;
	}
	if(rs>=1)
	{
		one=rs/1;
	}
	printf("\nTotal Minimum Denominations: \n 100's: %d \n 50's: %d \n 20's: %d\n 10's: %d\n 5's: %d\n 2's: %d\n 1's: %d",hun,fif,twe,ten,fiv,two,one);
}
