/* pattern searching */
#include <stdio.h>
#define MAXLINE 1000
int getline1(char line[],int max);
int strindex1(char source[],char searchfor[]);
char pattern[]="ould";
int main()
{
char line[MAXLINE];
int found=0;
        while(getline1(line,MAXLINE)>0)
        if(strindex1(line,pattern)>=0)
        {
        printf("%s\n",line);
        ++found;
        }
        printf("found is : %d\n",found);
        return found;
}
int getline1(char s[],int lim)
{
int c,i;
i=0;
while(--lim >0 && (c=getchar())!=EOF && c!='\n')
        s[i++]=c;
        if(c=='\n')
        s[i++]=c;
        s[i]='\0';
        return i;
}
int strindex1(char s[], char t[])
{

int i,j,k;
        for(i=0;s[i]!='\0';i++)
        {
                for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,i++)
                ;
                if(k>0 && t[k]=='\0')
                //printf("%d\n",i);
                return i;
        }
        //printf("it fials \n");
        return -1; // fail case 
}
