#include<stdio.h>
void main()
{
	int arr[] = {1,4,6,8,8,8,9,19,25,80,90};
	int ele ;
	scanf("%d",&ele);
	int start = 0;
	int end = sizeof(arr)/sizeof(int);
	int mid ;
	while(start<= end)
	{
		mid =(start+end)/2;
				
        printf("in index %d\n",mid);
		if(ele == arr[mid])
			
		{
			printf("%d in index %d\n",ele,mid);
			if(0) //1 for last index ---- 0 for first index
			{
				start = mid+1;
			}
			else 
				end = mid-1;
			
		}
		else if(ele>arr[mid])
		{
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}
	}
	
}