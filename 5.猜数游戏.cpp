#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number =rand ()%100+1; //	ȡһ��1~100��������
	int count =0;
	int a=0;
	printf("���Ѿ����һ��1��100֮�������\n");
	//printf("%d",number);
	do
	{
		printf("��²�������ǣ�");
		scanf("%d",&a);
		count++;
		if (a>number)
		{
			printf("������������ˣ�\n");
		}
		else if (a<number)
		{
			printf("���������С��! \n"); 
		}
	}  while (a!=number);
	
	printf ("̫���ˣ�������%d�ξ͵õ��˴𰸡�\n",count);
	
	return 0;
	
	
}
