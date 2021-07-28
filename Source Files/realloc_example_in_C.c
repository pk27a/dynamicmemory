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
    printf("%pc \t", ptr+i);
   }
	printf("\n next set: \n");
   n=10;
  ptr = realloc(ptr, n*sizeof(int));
  for(i=0;i<n;i++)
	printf(%pc \t",ptr + i);
  free(ptr);
   
}