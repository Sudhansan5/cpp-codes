#include<iostream>
#include<string>
using namespace std;
int main()
{
	char tble[10],crd[100],flag=0;
	gets(tble);
	for(int i=0;i<5;i++)
	   {  
	      scanf("%s",crd);
	      if(crd[0]==tble[0] || crd[1]==tble[1])
	           flag=1;
	  }
	  if(flag==1)
	  puts("YES");
	  else
    	puts("NO");
}
