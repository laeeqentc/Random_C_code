//replacing space with \b, tab with \t etc. 
#include<stdio.h>
int main()
{
int nb,nw,nt,nl,c;
nb=nw=nl=nt=c=0;
char \t;
        while((c=getchar())!=EOF){
        if(c==' '){
        ++nb;
        c='-';
        }
        if(c=='\t'){
        ++nt;
        c=\t;
        }
putchar(c);        
}
printf("\nblanks are %d\ntabs are %d\n",nb,nt);
return 0;
}
// more thiking needed: work on the printing of \t to '\t'
// one way to to copy its input to output
