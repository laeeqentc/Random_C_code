/* write func power(2,5)=32 */
#include<stdio.h>
int power(int a,int b);

int main()
{
int i,j,k,num;
printf("code for power function\nEnter x in 2^x\n");
scanf("%d",&num);
i=power(2,num);
printf("power is %d\n",i);

return 0;
}
int power(int a,int b)
{
int j,a1;
a1=1;
        for(j=0;j<b;++j)
        {
        a1=a1*a;        
        }
        printf("a1 is %d\n",a1);
        return a1;
}
