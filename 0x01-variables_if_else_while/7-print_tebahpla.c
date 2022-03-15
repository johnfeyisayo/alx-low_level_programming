#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabetin reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
