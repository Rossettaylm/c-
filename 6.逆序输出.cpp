#include <stdio.h>
int main()
{
	int ret=0;
	int x;
	int digit=0;
	printf("������һ����������");
	scanf("%d",&x);
	while (x>0)
	{
	digit=x%10;
	printf("%d",digit); //�����ĩλΪ0����� 
	x/=10;
	ret=10*ret+digit;
	}
	printf("\n%d",ret);  //�������ĩλΪ0����� 
	return 0;
	
}
