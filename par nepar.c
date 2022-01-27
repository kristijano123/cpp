#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("unesi neki broj");
    scanf("%d",&a);
    if (a%2==0)
        printf( "broj je paran");
    else
        printf("broj je neparan");

    return 0;
}
