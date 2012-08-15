/* rightrot right rotate x by n bits */
#include<stdio.h>
#include <limits.h>
int rightrot(int x,int n);
int main()
{
        int num,bit;
        num=bit=0;
        printf("enter number and bits to shift\n");
        scanf("%d%d",&num,&bit);
        printf("num :%d bit :%d\n",num,bit);
        rightrot(num,bit);
}

int rightrot(int x,int n)
{
        //x number, n bits 
        printf("x is %d\n",x);
        x=x>>n;
        printf("x Right shfit is %d\n",x);
//        x=x<<n;
//       printf("x Left shfit is %d\n",x);
        return 0;
}
