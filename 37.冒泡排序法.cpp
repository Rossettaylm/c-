//ð������ 
#include <stdlib.h> 
#include <stdio.h>
void sort (int a[],int len); 
int main()
{
	int n;
	scanf("%d",&n);
	int *a;
	a = (int*)malloc(sizeof(int)*n);  //���붯̬�ڴ�
	printf("�����볤��Ϊ%d�����飺",n); 
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort (a,n);  //����ð�������� 
	free(a);    //free��̬�ڴ� 
	return 0;
}

void sort(int a[],int len)
{
	int t;
	for (int i=0;i<len-1;i++)  //����len-1������ 
	{
		for (int j=0;j<len-1-i;j++)  //ÿ��������� / С����ð�ݵ����ұ� 
		{
			if (a[j]>a[j+1])  //��С�������� 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("�������С��������Ϊ��");
	for (int k=0;k<len;k++)  
	{
		printf("%d ",a[k]);  //����������������� 
	}
	printf("\b\n");
}
