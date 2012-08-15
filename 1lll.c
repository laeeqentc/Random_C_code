/*leap year NULL string length*/
#include <stdio.h>
int main()
{
int c,i;
int year=0;
char s[20];
char *a[20];
printf("size of NULL is %d value: %d : %d\nEnter a year\n",sizeof(NULL),NULL,NULL);
scanf("%d",&year);
        // leap year , div by 4, not by 100 but  400 
        if((year%4)==0 && (year%100)!=0) // check logic 
        printf("%d is a leap year\n",year);
        else 
        printf("%d is not a leap year\n",year);
        
        // strlength method
        printf("Enter a string\n");
        i=0;
        while((c=getchar())!=EOF){
        ++i;
        }
       
printf("\nLength is %d\n",i);        
return 0;
}
