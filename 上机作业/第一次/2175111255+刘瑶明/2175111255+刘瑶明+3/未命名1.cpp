#include <stdio.h>
int main()
{
	int n,a,b,c;
	printf("������һ����λ��:");
	scanf("%d",&n);
	a=n%10;
	b=(n-a)/10%10;
	c=(n-10*b-a)/100;
	printf("���������£�\n");
	printf("��λ��Ϊ��%d\n",a);
	printf("ʮλ��Ϊ:%d\n",b);
	printf("��λ��Ϊ:%d\n",c);
	return 0;
}
