// lower function in ? style 
#include<stdio.h>
int lower1(char s[],int num);
int main()
{
        int i,j;
        i=j=0;
        char input[40];
        puts("enter a string\n");
        gets(input);
        puts(input);
        while(input[i]!='\0')
        ++i;
        printf("i:%d\n",i);
        lower1(input,i);

return 0;
}
int lower1(char s[],int num)
{
        int i,lower;
        i=lower=0;
        char s1[40];
        for(i=0;i!='\0' && i<num-1;++i)
        {
                if((s[i]>'a') && (s[i]<'z'))
                {
                ++lower;
                s1[i]=s[i]-('a'-'A');
                }
        }
        puts(s);
        puts(s1);
        return 0;
}
