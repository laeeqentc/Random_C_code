#include<stdio.h>
int main(int argc,char *argv[])
{
int c;
/*c=getchar();
while(c!=EOF){
putchar(c);
c=getchar();
}*/
// second method 
while((c=getchar()) !=EOF){
putchar(c);
}
// EOF is Ctrl+z 
return 0;
}
