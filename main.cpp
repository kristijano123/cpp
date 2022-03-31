#include <stdio.h>


int main()
{
    int m, suma=0;
   int n,brSanduka=1;
 printf("unesi broj jabuka \n");
 scanf("%d",&n);
 while(n){

  printf("unesi masu jabuke\n");
 scanf("%d",&m);
 n--;

 if(suma+m>1000){
        suma=m;
        brSanduka++;


 }else suma+=m;
 } printf("treba %d sanduka",brSanduka);

}
