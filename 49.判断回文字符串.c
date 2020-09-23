#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}


bool palindrome( char *s )
{
    int count = strlen(s);
    char a[20];
    char b[20];
    int ret = false;
    int i,j;
    if (count%2==0){                   //偶数情况 
         for (i=0;i<count/2;i++)
        {
           a[i] = s[i]; 
        }
        a[i]='\0';
        for (j=count-1;j>=count/2;j--)
        {
            b[count-1-j] = s[j];
        }
        b[count-1-j]='\0';
        if (strcmp(a,b)==0)
        {
            ret = true;
        }
    }
    if (count%2==1)                    //奇数情况 
    {
    	for (i=0;i<=count/2;i++)
        {
           a[i] = s[i]; 
        }
        a[i]='\0';
        for (j=count-1;j>=count/2;j--)
        {
            b[count-1-j] = s[j];
        }
        b[count-1-j]='\0';
        if (strcmp(a,b)==0)
        {
            ret = true;
        }
	}
    
    return ret;

}
