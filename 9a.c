#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	float area_of_circle=3.14*a*a;
	float area_of_square=b*b;
	float area_of_rectangle=c*d;
	float area_of_triangle=0.5*e*f;
	printf("%.2f\n",area_of_circle);
	printf("%.2f\n",area_of_square);
	printf("%.2f\n",area_of_rectangle);
	printf("%.2f",area_of_triangle);
}
