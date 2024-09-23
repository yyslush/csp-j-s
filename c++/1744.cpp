#include<iostream>
using namespace std;

int n;
string ch="",ma="",en="",mach="",mama="",maen="";

int sou(string s1,string s2)
{
	
}

int main()
{
	cin>>ch>>ma>>en>>n;
	for(int i=1;i<=n;++i)
	{
		string cht,mat,ent;
		cin>>cht>>mat>>ent;
		if(mach<cht) mach=cht;
		if(mama<mat) mama=mat;
		if(maen<ent) maen=ent;
	}
	if(ch>=mach) 
		cout<<0;
	else
		cout<<mach-ch;
	if(ma>=mama) 
		cout<<" "<<0;
	else
		cout<<" "<<mama-ma;
	if(en>=maen) 
		cout<<" "<<0;
	else
		cout<<" "<<maen-en;
	return 0;	
}
