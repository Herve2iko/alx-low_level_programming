#include <stdio.h> 
 int  main(void)
{
    int a;
    int b;
    int c;
 
    a = '0';
    b = '1';
    while (a <= '9')
    {
        while (b <= '9')
        {
                putchar(a);
                putchar(b);
                putchar(' ');
            b++;
        }
        a++;
        b = a;
    }
    return(0);
}
