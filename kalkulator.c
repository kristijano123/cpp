#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int B1;
    int N1;
    int B2;
    int N2;
    printf("unesi brojnik 1\n");
    scanf("%d",&B1);
    printf("unesi nazivnik 1\n");
    scanf("%d",&N1);
    printf("unesi brojnik 2\n");
    scanf("%d",&B2);
     printf("unesi nazivnik 2\n");
    scanf("%d",&N2);
    int N3=N2*N1;
    int b1=N2*B1;
    int b2=N1*B2;
    int B3=b1+b2;
    float x=(float)B3/N3;
    printf("rezultat u decimalnom zapisu je %.2f\n",x);
    printf("rezultat u razlomku je %d / %d\n",B3,N3);

}
