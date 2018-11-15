//Harikrishnan S Kartha
//S3D-26

#include<stdio.h>
#include<conio.h>
int main()
{
	int heap[10],no,i,j,c,root,temp;
	
	printf("\n enter the no of elements:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("enter the element");
		scanf("%d",&heap[i]);
	}
	for(i=0;i<no;i++)
	{
		c=i;
		do
		{
			root=(c-1)/2;
			if(heap[root]<heap[c])
			{
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			c=root;
		}while(c!=0);
	}
	printf("heap array:\n");
	for(i=0;i<no;i++)
		printf("%d\n",heap[i]);
	for(j=no-1;j>=0;j--)
	{
		temp=heap[0];
		heap[0]=heap[j];
		heap[j]=temp;
		root=0;
		do
		{
			c=2*root+1;
			if((heap[c]<heap[c+1])&&c<j-1)
				c++;
			if(heap[root]<heap[c]&&c<j)
			{
				temp=heap[root];
				heap[root]=heap[c];
				heap[c]=temp;
			}
			root=c;
		}while(c<j);
	}
	printf("\nthe sorted array is:\n");
	for(i=0;i<no;i++)
		printf("\n%d",heap[i]);
	getch();
	return 0;
}
