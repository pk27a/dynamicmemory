#include <stdio.h>
#include <stdlib.h>

void main() {
  int n, i, *ptr, sum=0;
  n=5;
  ptr= (int*) calloc(n * sizeof(int));
  if(ptr==NULL)
  {
   exit(0);
  }
  
  
}