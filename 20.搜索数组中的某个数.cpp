#include <stdio.h>

int search (int key,int a[],int length);

int main()
{
	int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,35}; 
	{
		int i;
		printf("size of a is %u\n",sizeof (a));
		printf("size of a[0] is %u\n",sizeof (a[0]));
		for (i=0;i<sizeof(a)/sizeof(a[0]);i++)    //利用sizeof（a）/sizeof（a[0]）可得到数组的长度 
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	
	int x;
	int loc;
	printf("请输入一个数字:");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if (loc!=-1)
	{
		printf("%d在第%d个位置上\n",x,loc);
		
	} 
	else 
	{
		printf("%d不存在\n",x);
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

