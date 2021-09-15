#include <stdio.h>
int main()
{
    int a;
    int i;
    printf("enter a number");
    scanf("%d", &a);
    int flag = 0;
    for (i = 2; i <= a - 1; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            printf("not prime,divisible by %d", i);
            break;
        }
    }
    if (!flag)
        printf("prime");
}