#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("unesi neki kvadrant1\n");
    scanf("%d",&x);
    if (x==1)
    printf("++");
    else if(x==2)
        printf("-+");
    else if (x==3)
    printf("--");
    else if (x==4)
        printf("+-");
    else
        printf("to nije kvadrant");


}
