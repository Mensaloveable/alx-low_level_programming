#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */
int main(void)
{
char upper_alpha;
char lower_alpha;
for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
{
putchar(lower_alpha);
}
for (upper_alpha = 'A'; upper_alpha <= 'Z'; upper_alpha++)
{
putchar(upper_alpha);
}
putchar('\n');
return (0);
}

