/*checking sizes of char,int,float,long,double*/
#include<stdio.h>
#include <math.h>
int main()
{
int i,j,k,l;
i=j=k=l=0;
// direct method 
printf("int is %d\nfloat is %d\nchar is %d\nlong is %ld\ndouble is %ld\n",sizeof(int),sizeof(float),sizeof(char),sizeof(long),sizeof(double));
// direct computation 
i=pow(2,32);
printf("i is %d\n",i);
i=pow(2,16);
printf("i is %d\n",i);

return 0;
}
