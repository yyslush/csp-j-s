#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
char s[1005];
int a[35],p=0;

void overturn(int l)
{
	for(int i=1;i<=l-i+1;++i) swap(a[i],a[l-i+1]);
	cout<<p-l+1<<" ";
	//for(int i=1;i<=p;++i) cout<<a[i]<<" ";cout<<endl;	
}
int main()
{
	gets(s);
	int d=0;	
	for(int i=0;i<strlen(s);++i)
	if(s[i]!=' ') d=d*10+s[i]-48;
	else
	{
		a[++p]=d;
		d=0;
	} 
	a[++p]=d;
	for(int i=1;i<=p;++i) cout<<a[i]<<" ";cout<<endl;	
	for(int i=p;i>1;--i)
	{
		int q=max_element(a,a+i+1)-a;
		//cout<<q<<endl;
		if(q!=i)
		{
			if(q>1)	overturn(q); 
			overturn(i);			
		} 
		
	}
	cout<<0;
	
	return 0; 
}
