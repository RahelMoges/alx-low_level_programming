#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
int a;
int b;
a = 98;
b = 42;
printf("a=98, b=42\n", a, b);
swap_int(&a, &b);
printf("a=42, b=98\n", a, b);
return (0);
}

