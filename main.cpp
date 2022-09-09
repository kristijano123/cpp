#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int n;
  int m;
  int k;
  int x;
   printf("unesi koliko prijatelja ima u grupi");
  scanf("%d",&n);
  printf("unesi koliko se ucenika moze registrirati ");
  scanf("%d",&m);
  printf("unesi broj ucenika koju su vecupisali tecaj");
  scanf("%d",&k);
  x=n+k;
  if(x>=k){
      printf("mogu se svi upisati");
  }
  else{
    printf("ne mogu se svi upisati");
  }

}
