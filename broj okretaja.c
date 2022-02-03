#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf ("unesi broj promjera\n");
    scanf("%f",&x);
    float O=(x*3.1415);
    float n=(400000/O);
    printf("broj okretaja je %.0f\n",n);
}
