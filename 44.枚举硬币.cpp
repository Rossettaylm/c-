#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int one,two,five;
    int count = 0; 
    for (five=x/5;five>0;five--)
    {
        for (two=x/2;two>0;two--)
        {
            for (one=x/1;one>0;one--)
            {
                if (one*1+two*2+five*5==x)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",five,two,one,five+two+one);
                    count ++;
                }
            }
        }
    }
    printf("%d\n",count);
    
    
    return 0;
}
