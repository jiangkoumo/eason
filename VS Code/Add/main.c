#include <stdio.h>
#include "add.h"

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d", &a, &b);
    c = Add(a, b);
    printf("%d\n", c);
    return 0;
}
