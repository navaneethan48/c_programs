#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2;
	float g1,g2;
	float dis;
	printf("\nEnter the latitudes l1 and l2:");
	scanf("%d",&l1);
	scanf("%d",&l2);
	printf("\nEnter the Longitutes l1 and l2:");
	scanf("%d",&g1);
	scanf("%d",&g2);
	dis=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g2-g1));
	printf("The distance in Nautical miles:%f",dis);
}
