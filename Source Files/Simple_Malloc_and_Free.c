#include <stdio.h>
#include <stdlib.h>

void main() {
  int n, i, *ptr, sum=0;
  n=5;
  ptr= (int*) malloc(n * sizeof(int));
  if(ptr==NULL)
  {
   exit(0);
  }
  for(i=0;i<n;i++)
   {
    scanf("%d", ptr+i);
    sum+= *(ptr+i);
   }
   printf("Sum = %d",sum);
   free(ptr);
   
}