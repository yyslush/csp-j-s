#include<iostream>
#include<string>
using namespace std;

string w,s;
int n,count=0;

int main()
{
	cin>>n;
	cin>>w;
	for(int i=1;i<=n;++i)
	{
		getline(cin,s);	
		s+=" ";		
		int p;		
		while(s.find(w)!=-1)
		{
			++count;
			p=s.find(w)+w.length();
			s.erase(0,p);				
			//cout<<p<<" "<<count<<endl;			
		}			
	}
	cout<<count;
	return 0;
}
