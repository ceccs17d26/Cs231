//Harikrishnan S Kartha
//S3D-26
#include<stdio.h>
#include<conio.h>
void quicksort(int arr[20],int low, int high)
{
	int pivot,j,temp,i;
	if(low<high)
	{
		pivot=low;
		i=low;
		j=high;
		while(i<j)
		{
			while((arr[i]<=arr[pivot])&&(i<high))
			{
				i++;
			}
			while(arr[j]>arr[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		quicksort(arr,low,j-1);
		quicksort(arr,j+1,high);
	}
}
int main()
{
	int arr[20],n,i;
	
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&arr[i]);
	}
	printf("\nthe unsorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("\nthe sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	getch();
	return 0;
}
