#include <stdio.h>
int count(int n)
scanf("%d",&n);
{
    if(n==0)
    {
        return 0;
    }
    printf("%d\n",n);
    count(n-1);
}
int main()
{
    count(5);
    return 0;
}