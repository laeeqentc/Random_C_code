// printing histogram
#include<stdio.h>
int main()
{
int c,nw,nc,i;
c=nw=i=nc=0;
        while((c=getchar())!=EOF){
        if(c==' '||c=='\n'||c=='\t') // this would mean new word started or previous word ended 
        {
        ++nw;
        }
        /*if(c=='a'||c=='b'||c=='c'||c=='d'||c=='e'||c=='f'||c=='g')// char checking logic, make it better , toolong and cubersome...
        {
        ++nc;
        }*/
        //second logic, helpful code from 1ascii 
        if((c>='A'&& c<='Z')||(c>='a'&& c<='z'))
        {
        ++nc;
        }
   }// while ends here
        printf("\nnew lines/spaces/tab is %d\nTotal chars are %d\nhistogram is\n",nw,nc);
        for(i=0;i<nc;++i){
        printf("-"); // horiozontal
        }
printf("\n");
        for(i=0;i<nc;++i){
        printf("|"); // vertical
        }
printf("\n");
return 0;
}
/* Ex-1-13 done. But still check out differene between histogram and normal graph. Its more about pascal's triangle sort of
1
121
14141 etc.
histogram .
*/
