#include <stdio.h>
#include <stdlib.h>
int uradak(int x){

return x<=7;
}

int main()
{
    int x;
    printf ("unesi koliko je sati");
    scanf("%d",&x);
    printf(uradak(x)?"rjesit ce":"nece rijesit");
}
