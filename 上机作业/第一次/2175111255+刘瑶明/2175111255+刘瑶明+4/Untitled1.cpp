#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main ()
{
	double x,y,x1,y1,z;
	printf("请输入两个数 x,y 中间用逗号隔开\n");
	scanf("%lf,%lf",&x,&y);
	x=x*pi/180;
	y=y*pi/180;
	z=sin(fabs(x)+fabs(y))/cos(fabs(x)+fabs(y));
	printf("转化为弧度后x=%lf \n,转化为弧度后y=%lf \n,得到的答案z=%lf \n",x,y,z);
	return 0;
}
