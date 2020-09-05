//嵌套循环 
#include <stdio.h>
int main()
{
	int x;  //输入共有几元钱 
	int one,two,five;
	int count=0;
	
	scanf ("%d",&x);
	for (one=0;one<=x*10;one++)  //枚举法 
	{
		for (two=0;two<=x*10/2;two++)
		{
			for (five=0;five<=x*10/5;five++)
			  if (one+two*2+five*5==x*10)
			  {
			   printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",one,two,five,x);
			   count++;
			   //goto out; //当找到一种方案时结束 
		      }
		}
	}
	
	printf("共有%d种方案\n",count);
	
out:	
	return 0;
}
