#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=1,a[100][100];
		cin>>n;
			
		
		for(int i=1;i<=n;i++)
		{
		   int k=1;
		   for(int j=i;j>0;j--)
		   {
		   	  a[k][j]=c++;
		   	  k++;
		   }
	   }
	  for(int i=2;i<=n;i++)
	  {   int k=i;
	  	for(int j=n;j>=i;j--)
	  	{
	  		a[k][j]=c++;
	  		 k++;
		  }
		 
	  }
	   for(int i=1;i<=n;i++)
	   {
	      for(int j=1;j<=n;j++)
	          cout<<a[i][j]<<ends;
	        cout<<endl;
	  }
	}
}
