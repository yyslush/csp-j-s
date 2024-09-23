#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
string s1,s2;

int main()
{
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.length()/2;++i) swap(s1[i],s1[s1.length()-i-1]);	
	for(int i=0;i<s2.length()/2;++i) swap(s2[i],s2[s2.length()-i-1]);	
	int l;
	if(s1.length()>s2.length())
		l=s1.length();
	else 
		l=s2.length(),swap(s1,s2);
	int x=0;	
	for(int i=0;i<l;++i)
	{
		if(s2.length()<=i) s2[i]='0';
		//cout<<s1[i]<<" "<<s2[i]<<" ";
		int t=(s1[i]+s2[i]-96+x)/10;
		s1[i]=(s1[i]+s2[i]-96+x)%10+48;
		x=t;
		//cout<<x<<" "<<s1[i]<<endl;
	}
	if(x==1) s1[l++]=x;
	for(int i=l-1;i>=0;--i) printf("%c",s1[i]);
	return 0;
}
