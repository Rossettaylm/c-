#include <stdio.h>
int main()
{
    int a[3];
    int t;
    for (int cnt=0;cnt<3;cnt++)
    {
        scanf("%d",&a[cnt]);
    }
    for (int i=0;i<2;i++)    //������n-1�ֱȽ� 
    {
        for (int j=0;j<2-i;j++)        
        {
            if (a[j]>a[j+1])   
            { 
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;   //ð������  ÿ����һ�ֱȽϣ�������ð�����Ҳࡣ 
            }
        }
    }
       printf("%d->%d->%d\n",a[0],a[1],a[2]);
    
    return 0;
}
