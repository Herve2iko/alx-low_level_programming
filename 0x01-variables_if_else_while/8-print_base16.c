#include <stdio.h>
int main (void)
{
   int ch,v='a';
   for(ch = '0' ; ch <= '9' ; ch++)
   {
      putchar(ch);
   }
   while(v <='f'){
      putchar(v);
      v++;
   }
   return(0);
}