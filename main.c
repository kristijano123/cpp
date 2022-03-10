#include <stdio.h>
#include <stdlib.h>


int main()
{
     int x;
     printf("unesi neki troznamenkasti broj\n");
     scanf ("%d",&x);
     int y=x/100;
     int a=x/10-y*10;
     int b=x%10;
     if(y*y*y+a*a*a+b*b*b==x)
        printf("to je armstrongov broj");
     else
        printf("to nije armstrongov broj");

}
