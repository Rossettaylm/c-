//输入一个数并输入他的逆序数
#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number )
{
	int digit;
	int ret=0;
	while (number!=0)
	{
		digit=number%10;
		number=number/10;
		ret=ret*10+digit; 
	} 
	return ret;
}
