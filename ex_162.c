// ex 1-6 
#include<stdio.h>
int main()
{
int c;
while(1){
c=getchar();
        while(c=='1'){
        printf("c is 1\n");
        c=0;
        }
        while(c=='0'){
        printf("c is 0\n");
        c=1;
        }
        printf("..c is %c : ASCII %d\n",c,c);
        
}
return 0;
}
// not exactly the answer to the question 
