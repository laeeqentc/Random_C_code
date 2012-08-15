#include <stdio.h>
int main(int argc, char *argv[])
{
float far,cel,lower,upper,step;
lower=0;
upper=300;
step=20;
far=lower;
        while(far<=upper)
        {
        cel=(5*(far-32))/9;
        printf("far:%3.3f\tcel:%6.3f\n",far,cel);
        far=far+step;
        }
return 0;
}
