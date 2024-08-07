#include <stdio.h>  
#define max  2147483647;
int main() {
    // Write C code here
    int arr1[] = {5,7,8,9,6,1,4,7,8,9,64,1,2,56};
    int n = sizeof(arr1)/sizeof(int),index, min = 2147483647;
    
    for(int j = 0;j<n;j++)
    {
        for(int i = j;i<n;i++)
        {
            if(min>arr1[i])
            {
                min = arr1[i];
                index = i;
                
            }       
           
        }
         arr1[index] = arr1[j];
            arr1[j] = min;
            min = 2147483647;
             printf("%d\t",arr1[j]);
       
        
       
    }
//   for(int i = 0;i<n;i++)
//   {
//       printf("%d\t",arr1[i]);
      
//   }
    return 0;
}