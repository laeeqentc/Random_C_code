/* squeeze function */
#include<stdio.h>
void squeeze(char s[],int c);
int main()
{
        int i,j;
        i=j=0;
        char *input[40];
        printf("Enter a string with c chars\n");
        gets(input);
        for(i=0;input[i]!='\0';++i)
        {
                input[i]=input[i];
        }
        squeeze(input,i);
        return 0;
}
void squeeze(char s[],int c)
{
int i,j;
int cc=0;
        for(i=j=0;s[i]!='\0';i++)
        {
                if(s[i]!=c)
               s[j++]=s[i];
               if(s[i]=='c')
               {
               s[j++]=s[i];
               ++cc;
               }
         }      
               s[j]='\0';
printf(".. %s \nchars are %d\n c is %d\n",s,j,cc);
}
// something screwed here 
