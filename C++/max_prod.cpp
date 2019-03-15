#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int64_t a[1000000],n,i,max1=0,max2=0,k;
	cin>>n;
//	 int *a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
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
	cout<<max1*max2<<endl;
	return 0;
}
