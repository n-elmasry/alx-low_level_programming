#include <stdio.h>

/**
*main -  prints the numbers from 1 to 100
*Description:  prints a square
* Return:Returns 0
*/
int main(void)
{

int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf("Fizz");
}

else if ((i % 5) == 0)
{
printf("Buzz");
}
else if ((i % 5) == 0 && (i % 3) == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("\n");
return (0);
}
