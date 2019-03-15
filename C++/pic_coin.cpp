#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   
	  unsigned  long long int n,k,p;
		cin>>n>>k;
	if(k==1)
		{
			if((n+2)%2==0)
			   cout<<"Bob"<<endl;
		    else
			   cout<<"Alice"<<endl;
		}
	else
	{
		p=k;
		while(2*p<=n)
		{
			n-=2*p;
			p*=k;
		}
		if(p<=n)
			   cout<<"Alice"<<endl;
		else
			   cout<<"Bob"<<endl;
	}
}
	return 0;
}
