#include <stdio.h>
#include <ctype.h>
int main()
{
int i=0;
char *s1[40];
printf("enter a string with +ve or -ve nos\n");
gets(s1);
i=atoi1(s1);
printf("i :%d\n",i);
return 0;
}
int atoi1(char s[])
{
int i, n, sign;
for (i = 0; isspace(s[i]); i++)
;
sign = (s[i] == '-') ? -1 : 1;
if (s[i] == '+' || s[i] == '-')
i++;
for (n = 0; isdigit(s[i]); i++)
n = 10 * n + (s[i] - '0');
return sign * n;
/* skip white space */
/* skip sign */
}

