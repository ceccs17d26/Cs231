//Harikrishnan S Kartha
//S3D-26
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,beg,end,mid,item,n;
	int arr[20];
	clrscr();
	printf("enter the no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	printf("the unsorted list is :");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nthe sorted list is :");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	getch();
}
