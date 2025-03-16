#include <stdio.h>
int sumOfSquares(int n) 
{
    if (n == 1) 
    return 1;
    return (n * n) + sumOfSquares(n - 1);
}
int main() 
{
    int n = 10;
    printf("Sum of squares of first %d natural numbers: %d\n", n, sumOfSquares(n));
    return 0;
}
