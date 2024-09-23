#include<iostream>
#include<cstring>
using namespace std;
char q[10],w[10];
void dfs(int pre_sta,int pre_end,int aft_sta,int aft_end) 
{
    int i;
    char node;
    int range;
    if(pre_end<pre_sta||aft_end<aft_sta)
        return;
    if(pre_sta==pre_end)              
        {
            cout<<q[pre_sta];
            return;
        }
    node=w[aft_end];
    for(i=pre_sta;i<=pre_end;i++)       
    {
        if(q[i]==node)
            break;
    }
    range=i-pre_sta;
    cout<<node;
    dfs(pre_sta,i-1,aft_sta,aft_sta+range-1);    
    dfs(i+1,pre_end,aft_sta+range,aft_end-1);    
}
int main()
{
    int len;
    while(cin>>q>>w)
    {
        len=strlen(q);
        dfs(0,len-1,0,len-1);
        cout<<endl;
    }
    return 0;
}

