#include<stdio.h>
int main()
{
    int num, i, answer;
    printf("Enter the number :-");
    scanf("%d", &num);
    for(i=1;i<=10;i++)
    {
        answer=num*i;
        printf("%d * %d = %d\n", num, i , answer);
    }
    return 0;
}