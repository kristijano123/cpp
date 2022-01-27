#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ float a;
  float b;
  float c;
  printf("unesi broj stupova\n");
  scanf("%f",&a);
  printf("unesi udaljenost izmedu stupova\n");
  scanf("%f",&b);
  printf("unesi sirinu stupa\n");
  scanf("%f",&c);
  float e=(b*100)*(a-1)+c*(a-2);
  printf("udaljenost izmedu prvog izadnjeg stupa je\n%2.f",e);

    return 0;
}
