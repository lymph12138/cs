#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main ()
{
	double x,y,x1,y1,z;
	printf("������������ x,y �м��ö��Ÿ���\n");
	scanf("%lf,%lf",&x,&y);
	x=x*pi/180;
	y=y*pi/180;
	z=sin(fabs(x)+fabs(y))/cos(fabs(x)+fabs(y));
	printf("ת��Ϊ���Ⱥ�x=%lf \n,ת��Ϊ���Ⱥ�y=%lf \n,�õ��Ĵ�z=%lf \n",x,y,z);
	return 0;
}
