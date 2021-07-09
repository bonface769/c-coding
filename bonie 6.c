#include <stdio.h>
float circle(int r);
int main()

{
	
	int radius;
	float ans;
	printf("enter radius a circle");
	scanf("%d",&radius);
	
	ans=circle(radius);
	printf("the area is %f",ans);
	return 0;
}

float circle(int r)
{
	float area;
	area=3.142*8*8;
	
	return area;
}