// Date : 31/7/2012 
#include <stdio.h>
int main(int argc,char * argv[])
{
int i,j;
char k;
while(1){
        k=getchar();
        if('k'==0){
        //printf("K is %d",k);
        printf("is 0\n");
        }
        if(k==1){
        printf("is 1 \n");
        }
        if(k==EOF){
        printf("c is %c or %d",k,k);
        break;
        }
}
printf("program ends\n");
return 0;
}
