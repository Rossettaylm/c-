#include <stdio.h>

int search (int key,int a[],int length);

int main()
{
	int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,35}; 
	{
		int i;
		printf("size of a is %u\n",sizeof (a));
		printf("size of a[0] is %u\n",sizeof (a[0]));
		for (i=0;i<sizeof(a)/sizeof(a[0]);i++)    //����sizeof��a��/sizeof��a[0]���ɵõ�����ĳ��� 
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	
	int x;
	int loc;
	printf("������һ������:");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if (loc!=-1)
	{
		printf("%d�ڵ�%d��λ����\n",x,loc);
		
	} 
	else 
	{
		printf("%d������\n",x);
	}
	
	return 0;
}

int search (int key,int a[],int length)
{
	int ret=-1;
	int i;
	for (i=0;i<length;i++)
	{
		if (key==a[i])
		{
		ret=i;
		break;
		}
	}
	
	return ret;
}

