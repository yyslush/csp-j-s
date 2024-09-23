#include <iostream>
using namespace std;  
int main()
{
    int n,x,ans=0;
    cin>>n>>x;
    for (int i=1; i<=n; i++)
    {
        int temp=i;
        while (temp>0)
        {            
            if (temp%10==x) ans++;
            temp=temp/10;
        }
    }
    cout<<ans<<endl;
    return 0;  
}
