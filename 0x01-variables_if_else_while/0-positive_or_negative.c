#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("The number is positive");
}
else if (n == 0)
{
printf("The number is zero");
}
else
{
printf("The number is negative");
}
return (0);
}
