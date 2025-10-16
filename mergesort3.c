#include<stdio.h>
void merge(int arr[],int low,int mid,int high)
{
	int b[100];
	int i=low,j=mid+1,k=0;
	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		b[k]=arr[j];
		j++;
		k++;
	}
	for(i=low,k=0;i<=high;i++,k++)
	{
		arr[i]=b[k];
	}
	void merge_sort(int arr[],int left,int right)
	{
		if (left<right)
		{
			int mid=(left+right)/2;
			merge_sort(arr,left,mid);
			merge_sort(arr,mid+1,right);
			merge(arr,left,mid,right);
		}
	}
}
int main()
{
	int a[25],i,n;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n-1);
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
