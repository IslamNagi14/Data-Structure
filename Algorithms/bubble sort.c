#include <stdio.h>

int main() {
   int arr[] = {4,8,5,67,1,5,89,21,2,47,10,4,75,84,63,25,34};
   int n = sizeof(arr)/sizeof(int);
 
   
   for(int i = 0;i<n;i++)
   {
       for(int j = 0;j<n-i-1;j++)
       {
            if(arr[j]>arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
       }
   }
   
    for(int i = 0;i<n;i++)
   {
       printf("%d\t",arr[i]);
       
   }
  

    return 0;
}