#include<iostream>
using namespace std;
int main()
{
	int sum,y,b,r,min;
	cin>>y>>b>>r;
	if(y<=b && y<=r)
	  {
	  min=y;
	  if(r-y<2 || b-y<1)
	     min--;
	  if(r==y)
	     min--;
	  sum=3*min+3;
      }
	else if(b<=y && b<=r)
	  {
	  min =b;
	  if(b==r || b==y)
	    min--;
	  sum=3*min;
      }
	else 
	  {
	    min =r;
	    sum=3*min-3;
	  }
	cout<<sum;
}
