#include <stdio.h>
 
int  main(void)
{
     int a;
    int b;
    int c;
 
    x = '0';
    y = '1';
    z = '2';
    while (x <= '9')
    {
        while (y <= '9')
        {
            while (z <= '9')
            {
                putchar(x);
                putchar(y);
                putchar(z);
                putchar(' ');
                z++;
            }
            y++;
            z = y + 1;
        }
        x++;
        y = x;
    }
    return (0);
}