#include <stdio.h>
int a=1;
void increment()
{
    printf("%d ",a);
    a++;
    
}
int main()
{
    printf("%d ",a);
    increment();
    increment();
}


