#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string s;
int main()
{
	int l,sum=1,maxl=0;

	cin>>s;
	l=s.size();
	for(int i=0;i<l-1;i++)
	{
		 if (s[i]!=s[i+1]) 
	  {
	  	sum++;
	  	maxl=max(maxl,sum);
	  //	cout<<s[i]<<endl;
	   }
	   else sum=1;
	}
	 
	cout<<maxl;	 
	return 0;
}
