/*histogram of frequencies 
hello 
h - 
e -
l --
o -
*/
#include<stdio.h>
int main()
{
int c,nc,nw,nl,i,j;
int alp[26],alp1[26];
c=nc=nw=nl=i=j=0;
        // fill up an array of 26 alphabets 
        for(i=0;i<26;++i)
        {
                alp[i]=i+'a';//starts at 96
                alp1[i]=0;
        }
        while((c=getchar())!=EOF)
        {
                if(c>='a'&& c<='z')
                {
                ++nw;
                        for(i=0;i<26;++i)
                        {
                                if(c==alp[i])
                                {
                                alp1[i]=alp1[i]+1;
                                }
                        }
                }
        }//while ends here
        //print the alp
        for(i=0;i<26;++i)
        {
                printf("alp is %d : %c\n",alp[i],alp[i]);
                //printf("matched alps are :%d \nnow histogram..\n",alp1[i]);
          /*      if(alp1[i]>0)
                {
                        for(j=0;j<alp1[i];++j)
                        {
                        printf("-");
                        }
                }*/
        }
        for(i=0;i<26;++i)
        {
                printf("matched char are %d %c :%d\n",i,i+97,alp1[i]);
                if(alp1[i]>0)
                {
                        for(j=0;j<alp1[i];++j)
                        {
                        printf("-");//prints the no of times the alp comes
                        }
                }
        }
               
printf("\nwords are %d\n",nw);
return 0;
}
// Ex-1-14 done 
