/*replace blanks with tabs */
#include<stdio.h>
int main()
{
int c,nl,nw,nb,nt;
c=nl=nw=nt=nb=0;
        while((c=getchar())!=EOF)
        {
                if(c!='\n')
                ++nw;     
                if(c=='\n')
                ++nl;
                if(c=='\t')
                ++nt;
                if(c==' '){// blank is ' ' and not \b
                ++nb;
                c='\t';//replacing it by tabs
                }
                putchar(c);
        }
printf("\nwords are %d\nnew lines are %d\ntabs are %d\nBlanks are %d\n",nw,nl,nt,nb);
return 0;
}
/* very weird 
./1black_replacing < 1black_replacing.c 
/*replace	blanks	with	tabs	
#include<stdio.h>
int	main()
{
int	c,nl,nw,nb,nt;
c=nl=nw=nt=nb=0;
								while((c=getchar())!=EOF)
								{
											if(c!='\n')
											++nw;					
											if(c=='\n')
											++nl;
											if(c=='\t')
											++nt;
											if(c=='	'){//	blank	is	'	'	and	not	\b
											++nb;
											c='\t';//replacing	it	by	tabs
											}
											putchar(c);
								}
printf("\nwords	are	%d\nnew	lines	are	%d\ntabs	are	%d\nBlanksare	%d\n",nw,nl,nt,nb);
return	0;
}

words are 549
new lines are 23
tabs are 0
Blanks are 232
mamigo@ubuntu:~/mamigo_laeeq/c_prog_K_and_R/ch1$ 
*/

