#include<iostream>
using namespace std;
int main()
{
	int n,a,sum[100];
	cin>>n;
	for(int k=1;k<=n;k++)
	{   sum[k]=0;
		for(a=1+k;;a=a+k)
		{  //cout<<a<<" ";
			if(a>n)
			   a=a-n;
			sum[k]=sum[k]+a;
			if(a==1)
			   break;
			//cout<<sum[k]<<" ";
		}
		//cout<<sum[k]<<endl;
	}
     
	for(int i=1;i<n-1;i++)
	{   int temp,min=1000000;
	   for(int k=i;k<n;k++)
	   {  
		if(min>sum[k])
		  {
		  	temp=min;
		  	min=sum[k];
		  	sum[k]=temp;
		}  }
		cout<<min<<" ";
	}
}
