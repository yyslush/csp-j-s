#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool su(int);
string s;
int a[27];
int main ()
{
   	int maxn=0,minn=120;    
    cin>>s;	
	for(int i=0;i<s.length();++i)
	{
		++a[int(s[i])-96];
		if (a[int(s[i])-96]>maxn) maxn=a[int(s[i])-96];
	}
	for(int i=1;i<=26;++i) 
		if (a[i]>0&&a[i]<minn) minn=a[i];
	if(su(maxn-minn)&&maxn-minn>=2) cout<<"Lucky Word\n"<<maxn-minn;
		else cout<<"No Answer\n"<<0;    
    return 0;
}
bool su(int n)
{
    for (int j=2;j<=(int(sqrt(n)));++j)
        if (n%j==0) return false;
    return true;            
}
