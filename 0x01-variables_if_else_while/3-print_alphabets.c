#include <stdio.h>
int main (void)
{
   char ch,i='A';
   for(ch = 'a' ; ch <= 'z' ; ch++)
   {
      putchar(ch);
   	}
   while(i <= 'Z')
   	{
   		putchar(i);
   		i++;
   	}
   return(0);
}