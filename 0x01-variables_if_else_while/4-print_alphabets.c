#include <stdio.h>
int main (void)
{
   char ch;
   for(ch = 'a' ; ch <= 'z' ; ch++)
   {
   	if (ch=='p' || ch=='e')
   	{
   		continue;
   	}else{
      putchar(ch);
   	}
   }
   return(0);
}