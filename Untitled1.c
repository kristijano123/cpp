#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

       int rf;
       int rt;
       printf("unesi polumjer fontane\n");
       printf("unesi polumjer travnjaka\n");
       scanf("%d %d",&rf,&rt);
       float pf=rf*rf*3.14159 ;
       float pt=(rt*rt*3.14159)-pf;

       printf("povrsina je %.2f",pt);

return 0;

}
