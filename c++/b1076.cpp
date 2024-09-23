#include<iostream>
using namespace std;
int main()
{
	int n,i=1,j=0,max=0,h,l;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    cin>>n;
	while(i<=n)
	{
		cin>>h>>l;
		if (h>=90&&h<=140&&l>=60&&l<=90) ++j;
		else j=0;
		if (max<j) max=j;
		++i;
	}
    cout<<max;	
    //fclose(stdin);  
    //fclose(stdout);
    return 0;
}
