 #include<stdio.h>
 void merge(int arr[],int low,int mid,int high)
 {
 	int b[10];
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
	 while (i<=mid)
	 {
	 	b[k]=arr[i];
	 	i++;k++;
	 }
	 while (j<=high)
	 {
	 	b[k]=arr[j];
	 	j++;k++;
	 }
	 for(i=low,k=0;i<=high;i++,k++)
	 arr[i]=b[k];
 }
 void mergesort(int arr[],int left,int right)
 {
 	if(left<right)
 	{
 		int mid=(left+right)/2;
 		mergesort(arr,left,mid);
 		mergesort(arr,mid+1,right);
	 }
 }
 int main()
 {
 	 int n,i,a[25];
 	 printf("enter n value:");
 	 scanf("%d",&n);
 	 printf("enter %d elements:\n",n);
 	 for(i=0;i<n;i++)
 	 scanf("%d",&a[i]);
 	 mergesort(a,0,n-1);
 	 printf("sorted array:\n");
 	 for(i=0;i<n;i++)
 	 printf("%d\t",a[i]);
 	 return 0;
 }
