// Online C compiler to run C program online
#include <stdio.h>
void DeleteElement(int[],int,int);
int main() 
{
    
  int array[] = {1,2,3,4,5,6};
 int n = sizeof(array)/sizeof(int);
DeleteElement(array,n,5);
 for(int i = 0;i<n-1;i++)
  printf("%d\t",array[i]);
    return 0;
}

void DeleteElement(int array[],int n,int pos)
{
    
     for(int i=pos-1;i<n-1;i++)
  {
      array[i] = array[i+1];
  }
}