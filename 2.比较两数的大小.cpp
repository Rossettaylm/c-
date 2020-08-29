#include <stdio.h>
int main()
{
	int a=0,b=0;
	printf("输入两个数，比较最大值：");
	scanf("%d %d",&a,&b);
	if(a<b)
	printf("较大的数为：%d",b);
	else
	printf("较大的数为：%d",a);
	return (0); 
}
