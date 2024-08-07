
#include <stdio.h>

int main() {
   int arr[5] = {4,8,5,67,1};
   
 
   
   for(int i = 0;i<2;i++)
   {
       for(int j = i;j>=0;j--)
       {
       // printf("arr[%d] = %d\tarr[%d] = %d\n ",j,arr[j],j+1,arr[j+1]);
            if(arr[j]>=arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
            else
            {
            break;
            }
       }
       //printf("===============================\n");
      
   }
    
    for(int i = 0;i<2;i++)
   {
        printf("%d\t",arr[i]);
       
   }
  

    return 0;
}