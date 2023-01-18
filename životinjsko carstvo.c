#include <stdio.h>
#include <stdlib.h>

  struct zivina {
      char glasanje[50];
      int brnogu;
      int visina;
      char ime[20];
   };

  void brNogu(struct zivina *z){


  printf("zivotinja ima %d nogu\n",z->brnogu);
  }
  void glasanje(struct zivina *z){
  printf("zivotinja se glasa %s\n", z->glasanje );
  }
int main()
{
   struct zivina B[3]={
       "mumu",4,160,"panda",
       "brale",13,300,"bogomoljka"
};

   printf("sada upisi jos neke atribute(glasanje,broj nogu, visina i ime) o zivotinji kojoj zelis:\n");
   scanf("%s %d %d %s",B[2].glasanje, &B[2].brnogu, &B[2].visina, B[2].ime);
   brNogu(&B[0]);
   glasanje(&B[0]);




}
