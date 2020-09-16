#include <stdio.h>
int main()
{
    int a[3];
    int t;
    for (int cnt=0;cnt<3;cnt++)
    {
        scanf("%d",&a[cnt]);
    }
    for (int i=0;i<2;i++)    //共进行n-1轮比较 
    {
        for (int j=0;j<2-i;j++)        
        {
            if (a[j]>a[j+1])   
            { 
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;   //冒泡排序法  每进行一轮比较，最大的数冒到最右侧。 
            }
        }
    }
       printf("%d->%d->%d\n",a[0],a[1],a[2]);
    
    return 0;
}
