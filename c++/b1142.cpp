#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	freopen("test/test5.in","r",stdin);
	freopen("test/test5.out","w",stdout);
	cin>>s1>>s2;
	if (s2.find(s1,0)!=string::npos ) cout<<s1<<" is substring of "<<s2;
	else cout<<"No substring";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
