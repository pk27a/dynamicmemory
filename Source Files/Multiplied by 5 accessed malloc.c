#include <stdio.h>
#include <stdlib.h>

int main() {
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
    
   }
  for(i=0;i<n;i++)
	{
		printf("\n %d", (*(ptr+i))*5);
	}
   
   free(ptr);
	return 0;
   
}