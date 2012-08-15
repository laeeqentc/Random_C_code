//1.5.2
#include<stdio.h>
int main()
{
//countingcharcters in input
long nc;
printf("sizeof long is %d\nsizeof of double is %d\n",sizeof(long),sizeof(double));
nc=0;
while(getchar()!=EOF){
++nc;
}
printf("nc is %ld\n",nc);

return 0;
}
/* the answer will come and nc+1, because we enter "enter" and even that is a char as per ASCII, for eg
f <enter>
ctrl+d 
o/p: 2 
1 for f and the other one for <enter>
*/
