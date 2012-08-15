// program for clecius to farenhiet, my code
#include <stdio.h>
int main(int argc, char * argv[])
{
        int cel,far,temp,i;
        printf("code for Celcius to Farenhiet conversion\n");
        for(i=0;i<=271;i++) // absolute zero thing, -271 K 
        {
        cel=(5*(i-32))/9;
        printf("far %d : cel %d\n",i,cel);
        }        
return 0;
}
// note as it is int, things get rounded off. Use float for more precision. 
