#include <stdio.h>
#include <stdlib.h>

int main()
{
   int*ptr;
   int n;
   printf("unesi broj elemenata");
   scanf("%d",&n);
   printf("uneseni broj elemenata:%d\n",n);
   ptr=(int*)malloc(n*sizeof(int));

}
