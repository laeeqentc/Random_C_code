/*replacing tabs with blanks */
#include <stdio.h>
int main()
{
int c,nw,nl,nt;
c=nw=nl=nt=0; 
        while((c=getchar())!=EOF)
        {
                if(c!='\n')
                ++nw;
                if(c=='\n')
                ++nl;
                if(c=='\t'){//replaces tabs with equal number of blanks
                ++nt;
                c=' ';
                }
                putchar(c);
                
        }
printf("\nwords are %d\nnew lines are %d\ntabs are %d\n",nw,nl,nt);
return 0;
}
// done works correctly
