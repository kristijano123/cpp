#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main4()
{
    int n;
    printf("unesi neki šesteroznamenkasti broj\n",n);
    scanf("%d",&n);
    float a=n%10;
    n/=10;
    float b=n%10;
    n/=10;
    float c=n%10;
    n/=10;
    float d=n%10;
    n/=10;
    float e=n%10;
    n/=10;
    float f=n%10;
    float g=a+b+c+d+e+f;
    printf("zbroj znamenki je %.2f",g);


}

