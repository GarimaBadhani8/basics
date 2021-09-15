#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        printf("remainder is 0");
    }
    else if (a % 3 == 1)
    {
        printf("remainder is 1");
    }
    else
    {
        printf("remainder is 2");
    }
    return 0;
}