//冒泡排序法 
#include <stdlib.h> 
#include <stdio.h>
void sort (int a[],int len); 
int main()
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(sizeof(int)*n);  //申请动态内存
	printf("请输入长度为%d的数组：",n); 
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort (a,n);  //调用冒泡排序函数 
	free(a);    //free动态内存 
	return 0;
}

void sort(int a[],int len)
{
	int t;
	for (int i=0;i<len-1;i++)  //进行len-1轮排序 
	{
		for (int j=0;j<len-1-i;j++)  //每轮排序最大 / 小的数冒泡到最右边 
		{
			if (a[j]>a[j+1])  //从小到大排序 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("此数组从小到大排序为：");
	for (int k=0;k<len;k++)  
	{
		printf("%d ",a[k]);  //遍历输出排序后的数组 
	}
	printf("\b\n");
}
