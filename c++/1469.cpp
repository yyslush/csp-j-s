#include<iostream>
#include<queue>
using namespace std;
long long f[1000001],n,l,r;
bool b[1000001]={1};
struct p
{
    long long x;
    int xh;
    bool operator <(const p &a) const
    {
        return x>a.x;
    }
}a;
priority_queue<p>q;
int main()
{
    cin>>n>>l>>r;
    for(int i=1;i<=n;i++)
        cin>>f[i];
    q.push(a);
    //cout<<a.x<<endl;
    for(int i=l+1;i<=n;i++)
    {
        a=q.top();
        while(q.size()>1&&a.xh+r+1<i)
            q.pop(),a=q.top();
        if(q.size()!=1||a.xh+r+1>=i)
            b[i]=1,f[i]+=a.x;
        if(b[i-l])
            a.xh=i-l,a.x=f[i-l];
        q.push(a);
        //for(int j=1;j<=i;++j) cout<<f[j]<<" ";cout<<endl;
    }
    if(b[n])
        cout<<f[n];
    else
        cout<<-1;
    return 0;
}
