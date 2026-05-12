#include <stdio.h>

// no return no parametar

void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("%d", ans);
}

int main()
{
    sum();
    return 0;
}