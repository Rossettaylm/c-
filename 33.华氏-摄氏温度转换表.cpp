//����2��������lower��upper��lower��upper��100���������һ��ȡֵ��ΧΪ[lower��upper]����ÿ������2���϶ȵĻ���-�����¶�ת����
//�¶�ת���ļ��㹫ʽ��C=5��(F-32)/9�����У�C��ʾ�����¶ȣ�F��ʾ�����¶�

#include <stdio.h>

void trans(int low,int high);
int main()
{
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if (lower>upper)
	{
		printf("Invalid.\n");
	} else{
		trans (lower,upper);
	}

	return 0;

}

void trans(int low,int high)
{
	int f;
	double c;
	printf("fahr celsius\n");
	for (int i=low;i<=high;i+=2)
	{
		f=i;
		c=5.0*(f-32)/9;
		printf("%d%6.1f\n",f,c);
	}
} 
