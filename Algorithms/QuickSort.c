#include <stdio.h>

int pivot(int[],int,int);
void swap(int[],int,int);
void quickSort(int[],int,int);
int main() 
{
    
  int array[] = {0,4,7,5,8,9,3,2,1,10};
 int n = sizeof(array)/sizeof(int);
  quickSort(array,0,n-1);
 for(int i = 0;i<n;i++)
  printf("%d\t",array[i]);
    return 0;
}

int pivot(int array[],int start,int end)
{
    int pivot = array[start];
    int swapIndex = start;
    
    for(int i = start+1;i<end+1;i++)
    {
        if(pivot > array[i])
        {
           
            swapIndex++;
            swap(array,swapIndex,i);
           
        }
        
    }
    swap(array,start,swapIndex);
    printf("array[%d] = %d\n",swapIndex,array[swapIndex]);
    return swapIndex;
}



void quickSort(int array[],int left,int right)
{
    
    if(left < right)
    {
       int pivotIndex = pivot(array,left,right);
       quickSort(array,left,pivotIndex-1);
       quickSort(array,pivotIndex+1 ,right);
    }
    
    
    
}



void swap(int arr[],int i,int j)
{
    int temp;
       temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;

}