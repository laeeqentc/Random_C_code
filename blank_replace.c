// replace multiple blanks by single blank
#include<stdio.h>
int main()
{
int b1,b2,b3,c,i;
b1=b2=b3=c=i=0;
char c1[8];
while((c=getchar())!=EOF){
       putchar(c);
       //count blanks 
        if(c==' '){
        ++b2;   
        }
        if(c=='  '){
        printf("\n2 spaces found\n");
        c=' ';
        }
       c1[i]=c;       
        ++i;
        //replace blanks 
       /* if(b2>1){
        b2=1;
        }*/
}
printf("\nyou entered\n");
puts(c1);
printf("\nblanks are %d\n",b2);
return 0;
}
// work on it more --- 
