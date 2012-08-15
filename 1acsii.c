//printing ASCII table
#include<stdio.h>
int main()
{
int i;
char c;
c=i=0;
for(i=0;i<127;++i){
        c=i;
        printf("i is %d and ASCII is %c\n",i,i);
}

return 0;
}
/* Simple code for printing ASCII
Golden things: 
* 127 are useful human reading readable, 2^8 is 256. 
* 

*/
 
