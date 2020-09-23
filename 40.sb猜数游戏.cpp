/*猜数字游戏是令游戏机随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，
并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。
如果猜到，则结束程序。程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”；
如果3次以内猜到该数，则提示“Lucky You!”；如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；
如果超过N次都没有猜到，则提示“Game Over”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。*/

#include <stdio.h>
int main()
{
    int rdm,N;
    scanf("%d %d",&rdm,&N);
    int count = 0;
    int n = 1; //用于记录输入了几个数，确定先输入了一个数 
    int a[20];
    scanf("%d",&a[0]);  //先输入了一个数 
    for (int i=1;a[i-1]>=0;i++)  //当最后输入的数是负数则退出循环 
    {
        scanf("%d",&a[i]);
        n++;
    }
	for (int i=0;i<n;i++)
	{	
		count++;       //无论如何，猜数次数加1 
		if (a[i]<0)
		{
			printf("Game Over\n");
			break;      
		}
		if (count==N+1)
		{
			printf("Game Over\n");
			break;      //达到规定猜数次数，输出Game Over 
		}
		if (a[i]>rdm)
		{
			printf("Too big\n");
		} else if (a[i]<rdm)
		{
			printf("Too small\n");
		} else if (a[i]==rdm)
		{	
			if (count == 1)
			{
				printf("Bingo!\n");
				break;
			}	else if(count <= 3)
			{
				printf("Lucky You!\n");
				break;
			}	else if(count>3 && count<=N)
			{
				printf("Good Guess!\n");
				break;
			}
		}s
		
	}
    
    
    return 0;
}

