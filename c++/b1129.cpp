#include<iostream>
#include<string>
using namespace std;
string s;
int main()
{
	int sum=0;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
		if(s[i]>='0'&&s[i]<='9')
			sum++;
	cout<<sum;
	return 0;
}
