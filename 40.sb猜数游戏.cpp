/*��������Ϸ������Ϸ���������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�
����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�
����µ�����������򡣳���Ҫ��ͳ�ƲµĴ��������1�β³���������ʾ��Bingo!����
���3�����ڲµ�����������ʾ��Lucky You!�����������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!����
�������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������*/

#include <stdio.h>
int main()
{
    int rdm,N;
    scanf("%d %d",&rdm,&N);
    int count = 0;
    int n = 1; //���ڼ�¼�����˼�������ȷ����������һ���� 
    int a[20];
    scanf("%d",&a[0]);  //��������һ���� 
    for (int i=1;a[i-1]>=0;i++)  //�������������Ǹ������˳�ѭ�� 
    {
        scanf("%d",&a[i]);
        n++;
    }
	for (int i=0;i<n;i++)
	{	
		count++;       //������Σ�����������1 
		if (a[i]<0)
		{
			printf("Game Over\n");
			break;      
		}
		if (count==N+1)
		{
			printf("Game Over\n");
			break;      //�ﵽ�涨�������������Game Over 
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

