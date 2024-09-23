#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;++i)
    {
        for(int j=1;j<=n;++j)
        	printf("%2d",j);
        cout<<endl;
    }
    return 0;
}
