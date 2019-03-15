#include<stdio.h>
void main()
{
	int n,a[100],i,max1=0,max2=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max1<=a[i])
		{
			max1=a[i];
			k=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i!=k)
	       if(max2<=a[i])
		     	max2=a[i];
	}
	printf("%d\n",max1*max2);
}
