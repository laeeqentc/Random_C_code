/* using if else ? thing*/
#include<stdio.h>
int main()
{
        int a,b,c,d;
        a=b=c=d=0;
        printf("enter 3 nos\n");
        scanf("%d%d%d",&a,&b,&c);
        d=(a>b)?a:b;
        // if a >b then set a otherwise set b 
        printf("highest no %d\n",d);
        return 0;
}
