#include <stdio.h>

int main()
{
    int n, i;
    int factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("The factorial is %d\n", factorial);
    return 0;
}


