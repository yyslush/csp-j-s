#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
float  fe(int);
int main ()
{
	int n,b;
	float s=0.0;
	//freopen("test/test1.in","r",stdin);
	//freopen("test/test1.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>b;
		s+=fe(b);
	}
	printf("%0.1f",s);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
    
}
float fe(int a)
{
	float t;
	if (a%70==0) t=a/70*0.1;else t=(a/70+1)*0.1;
	return t;
}

