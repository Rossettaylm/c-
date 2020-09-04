#include <stdio.h>
int main()
{
	int ret=0;
	int x;
	int digit=0;
	printf("请输入一个正整数：");
	scanf("%d",&x);
	while (x>0)
	{
	digit=x%10;
	printf("%d",digit); //能输出末位为0的情况 
	x/=10;
	ret=10*ret+digit;
	}
	printf("\n%d",ret);  //不能输出末位为0的情况 
	return 0;
	
}
