#include<stdio.h>   //The array must be arranged in ascending or descending order.
int main()
{
	int arr[10],first=0,last=9,mid=0,n,k=0,i;
	printf("Enter the elements in the array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched");
	scanf("%d",&n);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(n>arr[mid])
		first=mid+1;
		if(n<arr[mid])
		last=mid-1;
		if(arr[mid]==n)
		{
		   k=1;
		   break;
	    }
		
	}
	if(k==1)
	printf("The element %d is found", n);
	else
	printf("The element %d is not found", n);
	return 0;
}