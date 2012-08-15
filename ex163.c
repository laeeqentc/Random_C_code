#include<stdio.h>
int main()
{
int c;
while(((c=getchar())!=EOF)&c=='0'){
printf("c is 0\n");
break;
}
while(((c=getchar())!=EOF)&c=='1'){
printf("c is 1\n");
break;
}
while(((c=getchar())!=EOF)){
printf("DEF:c is %c ASCII %d\n",c,c);
break;
}
return 0;
}
/* not exact -- 
// Ans: ANy loop if true (NON ZERO) always executes, hence while(1) will always execute as an infinite loop. If it is zero , then it won't. Hence in all the above examples so far, the expression
getchar()!=EOF 
Has resulted in being TRUE (1)
only when we punch in  Ctrl+D , it becomes 0 as it is the EOF operaotr defined in glibc. 
*/
