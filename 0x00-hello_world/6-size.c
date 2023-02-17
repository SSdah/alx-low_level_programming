#include <stdio.h>
/***
 * main -Entry point
 *
 * return:always 0 (success)
 */
int main(void)
{
	int a;
        long int b;
	long long int c;
	char d;
        float f;
	
	printf("Size a of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
        return (0);

}
