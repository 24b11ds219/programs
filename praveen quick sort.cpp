#include<stdio.h>
void read(int[],int);
void display(int[],int);
void swap(int*,int*);
void quicksort(int[],int,int);
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++);
	scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void swap(int*x,int*y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void quicksort(int a[],int low,int high)
{
	int p,left,right;
	if(low<high)
	{
		p=low;
		left=low+1;
		right=high;
		while(left<=right)
		{
			while(left<=p)
			left++;
			while(right>=p)
			right--;
			if(left<right)
			swap(&a[left],&a[right]);
		}
		swap(&a[low],&a[right]);
		quicksort(a,low,right-1);
		quicksort(a,right+1,high);
	}
}
int main()
{
	int a[100],n;
	printf(" enter no.of elements:");
	scanf("%d",&n);
	printf(" enter array elements:");
	read(a,n);
	printf("before sorting:");
	display(a,n);
	quicksort(a,0,n-1);
	printf("\n");
	printf("after sorting:");
	display(a,n);
	return 0;
}
