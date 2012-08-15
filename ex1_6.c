// ex 1.6
#include<stdio.h>
int main(int argc,char *argv[])
{
int c;
//while((c=getchar()) !=EOF){
while(1){

        if(((getchar()) !=EOF)==0)
        printf("is 0\n");
        if(((getchar()) !=EOF)==1)
        printf("is 1\n");
if((getchar()) ==EOF){
        break;
        }
putchar(c);
}
return 0;
}
