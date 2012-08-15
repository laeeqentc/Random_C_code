// ex1-12 
#include<stdio.h>
#define IN_WORD 1
#define OUT_WORD 0
int main()
{
int c,nb,nl,nw,nt,i,state;
char s1[20];
c=nb=nl=nw=nt=i=state=0;
        while((c=getchar())!=EOF){
        if(c==' '){
        ++nb;
        }
        if(c=='\t'){
        ++nt;
        }
        if(c==' '||c=='\t'){
        //printf("\n space and tab\n");
        //c='\n';
        //s1[i]=c;
        //++i;
        //c='-';
        c='\n';
        }
        putchar(c);
                /*logic used is norally while tyring, people use words followed by a <space> or a <tab> , hence this will help us in printing the word line by line */
        }
        //puts(s1);
printf("\nblanks are %d\ntabs are %d\n",nb,nt);


return 0;
}
