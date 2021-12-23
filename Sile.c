#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    int b;
    printf("Unes dvije sile\n");
    scanf("%d %d",&a,&b);
    int n=a-b;
    float s=(float)(a*a+b*b);

    printf("rezultatna sila kada su sile u istom smjeru iznosi: %d N\n",a+b);
    printf("sila u razlicitom smjeru iznosi:%d N\n",n);
    printf("okomite sile su %.2f N\n ",sqrt(s));

    return 0;

}
