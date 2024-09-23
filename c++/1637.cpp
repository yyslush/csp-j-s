#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
stack<char> stf;
stack<int> stn;
string s;
int opera(char ch)
{
	while(stf.empty()!=true&&stf.top()<=ch)
	{
		int a=stn.top(); stn.pop();	
		int b=stn.top(); stn.pop();	
		if (stf.top()=='*')
		{
			stn.push((a*b)%10000);stf.pop();			
		}  
		else
		{
			stn.push((a+b)%10000);stf.pop();			
		} 		
	}	
}
int main()
{
	char ch;
	int num=0;
	int a,b;
	cin>>s;
	s+='+';
	for(int i=0;i<s.length();++i)	
	{
		ch=s[i];
		if (ch>='0'&&ch<='9') num=(num*10+int(ch)-int('0'))%10000;		
		else if ((ch=='+'||ch=='*')&&stf.empty()==true)
		{ 
		 	stn.push(num);
			stf.push(ch);
			num=0;		
		}
		else if (ch>=stf.top())
		{
			stn.push(num);
			opera(ch);
			num=0;
			stf.push(ch);
			
		}
		else
		{
			stn.push(num);
			stf.push(ch);
			num=0;				
		}
	}	
	cout<<stn.top();
	return 0;
	
}
