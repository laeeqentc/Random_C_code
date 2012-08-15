// ex 1-6 
#include<stdio.h>
int main()
{
int c;
while(1){
c=getchar();
        while(c==1){
        printf("c is 1\n");
        c=0;
        c=getchar();
        }
        while(c==0){
        printf("c is 0\n");
        c=1;
        c=getchar();
        }
        printf("..c is %c : %d\n",c,c);
        
}
return 0;
}

