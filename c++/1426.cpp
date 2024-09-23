#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
 
struct dat
{
    int at;
    int s;
    int o;
}a[105];
 
int x,n,tim;
 
bool cmp(dat x,dat y)
{
    return(x.at<y.at);
}
 
int main()
{
    cin>>x>>n;
    for(int i=1;i<=n;++i) cin>>a[i].at>>a[i].s>>a[i].o;
    sort(a+1,a+n+1,cmp);
    //cout<<endl;
	//for(int i=1;i<=n;++i) cout<<a[i].at<<" "<<a[i].s<<" "<<a[i].o<<endl;      
    for(int i=1;i<=n;++i)
    { 
        if(a[i].s!=x)
            tim=tim+abs(a[i].s-x)*3+6;
        tim=tim+abs(a[i].s-a[i].o)*3+6;
        if(i<n&&tim<a[i+1].at) tim=a[i+1].at;
        x=a[i].o;
        cout<<tim<<endl;;
    }
    cout<<tim;
    return 0;
}
