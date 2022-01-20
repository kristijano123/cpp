#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    float y;
    printf("unesi pocetnu cijenu\n");
    scanf("%f",&x);
    printf("unesi konacnu cijenu\n");
    scanf("%f",&y);
    float s=(x-y)/x*100;
    printf("snizenje je %2.f %%\n",s);
    return 0;
}
