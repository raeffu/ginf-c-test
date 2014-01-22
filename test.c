/*
  test.c
  test exercises in C
*/

// include library
#include <stdio.h>

int afct(int a, int b) {
  int i, p;

  p=1;

  for(i=1;i<b;++i)
    p=p*a;
  return p;
}

int main(int argc, char *argv[]){

  printf("afct(2,10) =  %d\n", afct(2,10));

  return 0;
}
