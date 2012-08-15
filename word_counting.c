// word counting 
#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
int c,nl,nw,nc,state;
state=OUT;
nl=nw=nc=0;
while((c=getchar())!=EOF){
        ++nc;
        if(c=='\n')
        ++nl;
        if(c==' '|| c=='\n' || c=='\t')
        state=OUT;
        else if (state==OUT){
        state=IN;
        ++nw;
        }        
}
printf("\nnew line %d\nnew word %d\nchar count %d\n",nl,nw,nc);
return 0;
}
// works correctly, uncover bugs if any, ans to Q 1-11
