#include <stdio.h>
int main()
{
	int n,a,b,c;
	printf("请输入一个三位数:");
	scanf("%d",&n);
	a=n%10;
	b=(n-a)/10%10;
	c=(n-10*b-a)/100;
	printf("输出结果如下：\n");
	printf("个位数为：%d\n",a);
	printf("十位数为:%d\n",b);
	printf("百位数为:%d\n",c);
	return 0;
}
