//line counting 
#include<stdio.h>
int main()
{
int c,n1;
n1=0;
while((c=getchar())!=EOF){
if(c=='\n')
++n1;
}
printf("new lines are %d\n",n1);
return 0;
}
