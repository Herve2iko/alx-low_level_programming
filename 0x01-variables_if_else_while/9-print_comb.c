#include <stdio.h>
int main (void)
{
   int ch;
   for(ch = '0' ; ch <= '9' ; ch++)
   {
      
      if (ch < '9')
      {
         putchar(ch);
         putchar(',');
         putchar(' ');
 
      }else{
         putchar(ch);
         continue;
      }

   }
   return(0);
}