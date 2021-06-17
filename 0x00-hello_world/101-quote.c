#include<stdio.h>
int main()
{
	char str[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int j=0;
	while(str[j]!='\0'){
		putchar(str[j]);
		j++;
	}
	return 0;
}

