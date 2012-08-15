// line, blank,tab counting 
#include<stdio.h>
int main()
{
int b,n,t;
b=n=t=0;
int c;
while((c=getchar())!=EOF){
if(c==' ')
++b;
if(c=='\n')
++n;
if(c=='\t')
++t;
}
printf("spaces are %d\nnew lines are %d\ntabs are %d\n",b,n,t);
return 0;
}
/* ex 1-8 solved correctly :) */
