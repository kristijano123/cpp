#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("unesi neki broj\n");
    scanf("%d",&x);
     printf("unesi neki broj\n");
    scanf("%d",&y);
    if (x<y)
        printf("broj %d je veci od %d",y,x);
    else if (x>y)
        printf("broj %d je veci od %d",x,y);
}
