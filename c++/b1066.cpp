#include<iostream>
using namespace std;
int main()
{
	int n,m,s=0;
	freopen("test/test4.in","r",stdin);
    freopen("test/test4.out","w",stdout);
    cin>>m>>n;
	for(int i=m;i<=n;++i)
	  if (i%17==0) s+=i;
	cout<<s;
	fclose(stdin);  
    fclose(stdout); 
	return 0;  
}
