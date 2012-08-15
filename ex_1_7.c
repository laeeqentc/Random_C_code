// print the value of EOF
#include <stdio.h>
int main(int argc,char * argv[])
{
int ch=0;
while(1){
if ( (ch=getchar()) == EOF ) {
        printf("EOF value=%d ch=%c\n", ch,ch);
        break;
        }
        else{
        printf("%c\n",ch);
        }
      }
return 0;
}
