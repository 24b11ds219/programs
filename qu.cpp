#include<stdio.h>
void quicksort(int a[],int first,int last)
{
	int i,j,pivot,temp;
	i=first;
	j=last;
	pivot=first;
	if(first<last)
	{
		while(a[i]<=a[pivot] && i<last)
		{
			i++;
		}
		while(a[j]>a[pivot])
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
int main()
{
	int i,n;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("sorted array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
