//Ƕ��ѭ�� 
#include <stdio.h>
int main()
{
	int x;  //���빲�м�ԪǮ 
	int one,two,five;
	int count=0;
	
	scanf ("%d",&x);
	for (one=0;one<=x*10;one++)  //ö�ٷ� 
	{
		for (two=0;two<=x*10/2;two++)
		{
			for (five=0;five<=x*10/5;five++)
			  if (one+two*2+five*5==x*10)
			  {
			   printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n",one,two,five,x);
			   count++;
			   //goto out; //���ҵ�һ�ַ���ʱ���� 
		      }
		}
	}
	
	printf("����%d�ַ���\n",count);
	
out:	
	return 0;
}
