#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
        int a;
        int b;
        int c;
        int d;
        printf("unesi brojnik i nazivnik prvog razlomka a zatim drugog");
        scanf("%d %d %d %d",&a, &b,&c,&d);

        int y=b==d?b:b*d;
        int x=b==d?a+c:a*d+c*b;

        printf("rezultat: %d / %d\n",x,y);
        printf("rezultat: %.2f\n", (float)x/y);




        return 0;






}
