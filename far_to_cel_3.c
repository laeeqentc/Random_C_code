#include <stdio.h>
int main(int argc,char *argv[])
{
int far;
for(far=300;far>=0;far=far-20)
{
printf("cel:%4d far:%6.6f\n",far,(5.0/9.0)*(far-32));
}
return 0;
}
// exc 1.5 done 
