#include<stdio.h>
int main()
{
	float hyp,opp,adj;
	float sin,cos,tan,cot,cosec,sec;
	printf("Enter Hypotenuse , opposite and adjacent:");
	scanf("%f %f %f",&hyp,&opp,&adj);
	sin=opp/hyp;
	cos=adj/hyp;
	tan=sin/cos;
	cot=1/tan;
	cosec=1/sin;
	sec=1/cos;
	printf("\nSine:%f\nCosine:%f\n Tangent:%f\nCotangent:%f\nCosecant:%f\nSecant:%f\n",sin,cos,tan,cot,cosec,sec);
}
