#include<iostream>
#include<string>
using namespace std;

int sum,n,p,m=10000002;
string s;

int main(){
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>s;p=0;
		for(int j=0;j<s.length();++j)
			if(s[j]>='a'&&s[j]<='z') ++p;	
		if(p%10!=0&&m>p) m=p;
		sum+=p;	
		//cout<<p<<" "<<m<<" "<<sum<<endl;
	}
	if(sum%10==0)
		if(sum!=0) sum-=m;
	if(sum>=0) cout<<sum; else cout<<0;		
	return 0;
}
