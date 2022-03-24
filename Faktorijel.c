#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int x=1;

    do{
    printf("unesi neki broj\n");
    scanf("%d",&n);

    if(n<0) printf("Err");
    }while(n<0);
    for (i=n;i>=1;i--) x*=i;



    printf("faktorijel broja %d iznosi %d",n,x);
}
