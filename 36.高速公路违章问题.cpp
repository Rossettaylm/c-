//���չ涨���ڸ��ٹ�·����ʹ�Ļ��������ﵽ�򳬳����������ٵ�10%��200Ԫ���
//���ﵽ�򳬳�50%����Ҫ������ʻ֤�����д������ݳ��ٺ������Զ��б�Ըû������Ĵ���
#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if (x<(int)(y*1.1))   //Ҫ����ǿ��ȡ������double����ʵ����ֻ�����޽ӽ���y*1.1 
    {
        printf("OK\n");
    } else if (x>=(int)(y*1.1) && x<(int)(y*1.5))
    {
        printf("Exceed %.0f%%. Ticket 200\n",1.0*(x-y)/y*100);

    } else if (x>=(int)(y*1.5))
               {
                   printf("Exceed %.0f%%. License Revoked\n",1.0*(x-y)/y*100);
               }
    
    return 0;
}
