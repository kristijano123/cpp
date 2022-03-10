#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf(" unesi neki broj kvadanta\n");
    scanf("%d",&x);
    switch(x){
case 1:
    printf("++");
    break;
case 2:
    printf("-+");
    break;
case 3:
    printf("--");
    break;
case 4:
    printf("+-");
    break;
default:
    printf ("to nije kvadrant");
    }
}
