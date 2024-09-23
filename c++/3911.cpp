#include<iostream>
using namespace std;
int main()
{
	int n;
	//freopen("test/test1.in","r",stdin);
	//freopen("test/test1.out","w",stdout);
	while(cin>>n,n!=0)
		if (n%2==0) cout<<"Kakashi"<<endl;else cout<<"Lost"<<endl;
	//fclose(stdin);
	//fclose(stdout);	
	return 0;	
}
