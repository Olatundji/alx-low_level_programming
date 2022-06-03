#include<stdio.h>

/**
 * main - prints all the alphabets in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char j;

for (j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
