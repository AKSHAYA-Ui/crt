
#include <stdio.h>
int fib(int n)
{
    if(n==0 || n==1)
    
        return n;
else

return fib(n-1)+fib(n-2);
}
 int main()
{
int n;
scanf("%d",&n);
int r=fib(n);
printf("%d",r);

}
