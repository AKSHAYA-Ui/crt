#include <stdio.h>
void fun(int n)
{
    if(n>=1)
{
    fun(n-1);
    printf("%d",n);
}
}
int main()
{
    int n;
    printf("Enter n value");
    scanf("%d",&n);
    fun(n);
}
