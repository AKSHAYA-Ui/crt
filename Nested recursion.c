#include <stdio.h>
int fun(int n)
{
    if(n>100)
    return n-10;
    return fun(fun(n+11));
}

int main() {
    int k=fun(95);
    printf("%d",k);

    return 0;
}
