/*8 bin search example in an array, using middle number*/
#include<stdio.h>
int binsearch (int x,int v[],int n);
int main()
{
        int i,j,k,num,num1;
        i=j=k=num=num1=0;
        int v1[10];
        int v2[10];
        printf("Enter an array of 10\n");
        for(i=0;i<10;++i)
        {
                scanf("%d",&num);
                v1[i]=num;
        }
        printf("entered array is \n");
        for(i=0;i<10;++i)
        {
                printf("%d",v1[i]);
        }
        printf("entered num to be compared\n");
        scanf("%d",&num1);
        j=binsearch(num1,v1,10);
        printf("\nj:%d\n",j);
        return 0;
}
int binsearch(int x,int v[],int n)
{
int low,high,mid;
low=0;
high=n-1;
        while(low<=high)
        {
                mid=(low+high)/2;
                if(x<v[mid])
                        high=mid+1;
                else if(x>v[mid])
                        low=mid+1;
                else
                return mid;
        }
        return -1;
}
/* thin over it more, failure cases are many at 4 and other numbers as well */
