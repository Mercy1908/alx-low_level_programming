# include <stdio.h>

/**
* You should produce the exact same output as in the example
* Warnings are allowed
*
*Your program should return 0
*/
int main(void)
{
        char c;
        int i;
        long li;
        long long lli;
        Float f;
	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
