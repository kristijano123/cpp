#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    float y;
    printf("unesi temperaturu ujutro\n");
    scanf("%f",&x);
    printf("unesi temperaturu popodne\n");
    scanf("%f",&y);
    float rt=abs(x-y);
    printf(" razlika temperature je %.2f\n ",rt);
}
