#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(sizeof(int)*n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[5]={0};
    int lev;
    for (int i=0;i<n;i++)
    {
        lev=a[i]/10;
        switch (lev)
        {
            case 10:
            case 9:b[0]++;break;
            case 8:b[1]++;break;
            case 7:b[2]++;break;
            case 6:b[3]++;break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:b[4]++;break;
            default :break;
        }
    }
        for(int i=0;i<5;i++)
        {
            printf("%d ",b[i]);
        }
        printf("\b\n");
        free(a);
    return 0;
}
