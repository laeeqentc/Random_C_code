/*longest line printing, also print the length, also print lines greater than 8 chars */
#include<stdio.h>
#define MAXLINE 1000
int getline1(char line[],int maxline);
void copy (char to[],char from[]);
int main()
{
int len,max;
char line[MAXLINE];
char longest[MAXLINE];
max=0;
        while((len=getline1(line,MAXLINE))>0)
        {
                if(len>max)
                {
                max=len;
                copy(longest,line);
                }
                if(max>8)
                printf("line >8 chars is %s\n",longest);
        }
        if(max>0)
        printf("longest line is %s\nLength is %d\n",longest,max);
        // it will print the length and the \n <enter> as well as even that is taken as one char
        return 0;
}
int getline1(char s[],int lim)
{
int c,i;
        for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
        {
        s[i]=c;
        }// takes line input
        
        if(c=='\n'){
        s[i]=c;
        ++i;
        }// takes the <enter> too         
        s[i]='\0';        
return i;
}
void copy(char to[],char from [])
{
int i=0;
while((to[i]=from[i])!='\0')
++i;
}
