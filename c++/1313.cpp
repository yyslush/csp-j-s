#include<iostream>
#include<string>
using namespace std;
string s;

int main()
{
	int n,p=-1,l;
	//freopen("test/test10.in","r",stdin);
	//freopen("test/test10.out","w",stdout);
	getline(cin,s);	
	cin>>n;
	l=s.length();	
	for(int i=1;i<=n;++i)
	{
		int x;
		cin>>x;
		p+=x;
		//cout<<p<<endl;
		if(p<=l-3&&s[p]=='>'&&s[p+1]=='>'&&s[p+2]=='>')	
		{
			while(s[p]=='>'&&p<l-1)++p;
			//cout<<1<<" "<<p<<" "<<s[p]<<endl;
			
		}	
			
		else if(p<=l-3&&s[p]=='*'&&s[p+1]=='*'&&s[p+2]=='*')	
		{
			int t=p;
			while(s[t]=='*')++t;
			if(p-(t-p)>=0) p-=(t-p);else p=0;
			//cout<<2<<" "<<p<<" "<<s[p]<<endl;
		}		
	}
	if (p>l-1) p=l-1;
	cout<<p+1<<" "<<l-p-1;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
