/*atoi conversion -own code*/
#include <stdio.h>
#define size 255
int atoi1(char s[]);

int main(int argc,char *argv[])
{
        int h;int i;
        //char a[1]="5";
        char b[40];
        //b=atoi(argv[1]);       
        //printf("%s\n",a);
        //printf("%d ..\n",b);
        puts("enter string");
        gets(b);
        puts(b);
        h=atoi1(b);
        printf("h is %d\n",h);  
return 0;
}
int atoi1(char s[])
{
        int i,n;
        n=0;
        for(i=0;s[i]>='0'&& s[i]<='9';++i)
        
        n=10*n+(s[i]-'0'); // not useful computation,just getting its position by incrementing the acsii table and matching
        return n;
}
