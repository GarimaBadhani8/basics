#include <stdio.h>
int main()
{ //153
    int n, r, c, temp, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}
