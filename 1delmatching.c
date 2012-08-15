/* deleting matching chars in s1 and s2 */
#include <stdio.h>
int squeeze(char s1[],char s2[]);

int main()
{
        int i,j,k;
        i=j=k=0;
        char *input1[40]; char *input2[40];
        printf("Enter 2 strings\n");
        gets(input1);
        printf("Now second one\n");
        gets(input2);
        k=squeeze(input1,input2);
        
return 0;        
}
int squeeze(char s1[],char s2[])
{
        int i=0;
        for(i=0;s1[i]!='\0' && s2[i]!='\0';++i)
        {
                if(s1[i]==s2[i])
                {
                        
                        //s1[i]=0;
                        putchar(s1[i]);
                        //s1[i]=s1[i]-s2[i];
                        s1[i]='0';
                        putchar(s1[i]);
                }
                
        }
printf("\nthe deledted s1 : %s\ns2 :%s\n",s1,s2);        
return 0;
}
/* note that the subtraction is not working, instead the substitution of 0 works,  think why ? */ 
