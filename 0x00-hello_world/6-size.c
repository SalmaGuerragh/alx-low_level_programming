#include <stdio.h>
/**
* main - Prints out a string to stdout
*
* Return : 0 (Succes)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of a clong long int: %lu byte(s)", sizeof(clong long int));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
