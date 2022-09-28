#include <stdio.h>
#include <stdlib.h>
int faktorijel(int n)
{
    return n==1?1:n*faktorijel(n-1);
}

int main()
{
    int n;
    printf("unesi neki broj");
    scanf("%d",&n);
    printf("%d",faktorijel(n));
    return 0;
}
