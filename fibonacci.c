#include <stdio.h>

int main()
{
    int limit;
    int prev = 0, current = 1, next;

    printf("Enter a number: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);

    printf("%d\n", prev);
    printf("%d\n", current);

    next = prev + current;

    while (next <= limit)
    {
        printf("%d\n", next);
        prev = current;
        current = next;
        next = prev + current;
    }

    return 0;
}
