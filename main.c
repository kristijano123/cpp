#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int b;
    int c;
    printf("unesi neki broj\n");
    scanf("%d",&a);
    printf("unesi neki broj\n");
    scanf("%d",&b);
    printf("unesi neki broj\n");
    scanf("%d",&c);
    if (a+b==c){
        printf("%d + %d = %d",a,b,a+b);
        }else if (a+c==b){
        printf("%d+ %d= %d",a,c,b);
        }else if (c+b==a){
        printf("%d+ %d= %d",c,b,a);
        }else{
            printf("niti jedan od ucitanih brojeva nije moguce prikazati kao zbroj");
        }

}
