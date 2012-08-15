#include <stdio.h>
int main(int argc,char * argv[])
{
int far;
for(far=0;far<=300;far=far+20)
printf("cel :%3d far :%6.6f\n",far,(5.0/9.0)*(far-32));
return 0;
}
