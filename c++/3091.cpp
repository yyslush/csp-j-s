#include<iostream>
using namespace std;
const int DAY=86400;
int n,t,x,s;
int main()
{
    cin>>n>>t;
    s=0;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        s++;
        t=t-(DAY-x);
        if (t<=0) break;
    }
    cout<<s<<endl;
    return 0;
}
