//按照规定，在高速公路上行使的机动车，达到或超出本车道限速的10%则处200元罚款；
//若达到或超出50%，就要吊销驾驶证。请编写程序根据车速和限速自动判别对该机动车的处理。
#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if (x<(int)(y*1.1))   //要进行强制取整处理。double类型实际上只是无限接近于y*1.1 
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
