//replacing space with \b, tab with \t etc. 
#include<stdio.h>
int main()
{
int nb,nc,nl,c;
nb=nw=nl=c=0;
        while((c=getchar())!=EOF){
        if(c==' '){
        ++nb;
        c='-';
        }
        if(c=='\t'){
        ++nt;
        c=\t;
        }
        
}
putchar(c);
printf("\nblanks are %d\ntabs are %d\n",nb,nt);
return 0;
}
