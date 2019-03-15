#include<iostream>
using namespace std;
int main()
{   int n,k;
	cin>>n>>k;
	float *sum=new float[n+1];
	float a[100][100],p[100][100];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			cin>>a[i][j];
			sum[i]+=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{   if(i==1)
			   p[i][j]=(a[i][j])/sum[i];
			else
			   p[i][j]=(p[i-1][j]*(a[i][j]+1)/(sum[i]+1) )+ (1-p[i-1][j])*(a[i][j]/(sum[i]+1));
			if(i==n)
			   cout<<p[i][j]<<" ";
		}
	}
	
}
