#include <stdio.h>
#include <math.h>
int main ()
{
	float x,a,y,z;
	printf("������x,����a �м��Զ��Ÿ���\n");
	scanf("%f,%f",&x,&a);
	z=x*x+1;
	y=log(x+sqrt(z))/log(a);
	printf("%f",y);
	return 0;
}
