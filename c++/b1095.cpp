#include <iostream>
using namespace std;
int main()
{
    int n,ans=0;
    //freopen("test/test0.in","r",stdin);
    //freopen("test/test0.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; ++i)
    {
        int t=i;
        while (t>0)
        {
            if (t%10==1) 
               ans++;
            t/=10;
        }
    }
    cout<<ans<<endl;
    //fclose(stdin);  
   	//fclose(stdout);
    return 0;
}
