#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number =rand ()%100+1; //	取一个1~100的正整数
	int count =0;
	int a=0;
	printf("我已经想好一个1到100之间的数。\n");
	//printf("%d",number);
	do
	{
		printf("请猜猜这个数是：");
		scanf("%d",&a);
		count++;
		if (a>number)
		{
			printf("你输入的数大了！\n");
		}
		else if (a<number)
		{
			printf("你输入的数小了! \n"); 
		}
	}  while (a!=number);
	
	printf ("太好了！你用了%d次就得到了答案。\n",count);
	
	return 0;
	
	
}
