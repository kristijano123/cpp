#include <stdio.h>
#include <stdlib.h>
int zarada(int x){

return (x*50)*30/100;

}

int main()
{
   int n;
   printf("unesi koliko casa proda");
   scanf("%d",&n);
   printf("profit je %d kovanica",zarada(n));
}
