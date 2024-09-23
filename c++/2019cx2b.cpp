#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N=1e6;
int n,m,ans,a[N+5],father[N+5];
int f[N+5];
vector<vector<int> > vct(1000000);

int Find(int x)
{
    if(father[x]==x) return x;
    return father[x]=Find(father[x]);
}
void Union(int x,int y)
{
    int xx=Find(x);
    int yy=Find(y);
    if(xx!=yy)
    {
        if (xx<yy)
            father[yy]=xx;
        else
            father[xx]=y;
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    int x,y;
    for (int i=1; i<=n; i++)
        father[i]=i;
    for (int i=1; i<=m; i++)
    {
        scanf("%d%d",&x,&y);
        Union(x,y);
    }

    int mm=0;
    for (int i=1; i<=n; i++)
    {
        vct[Find(father[i])].push_back(i);
        mm=max(mm,father[i]);
    }
    for (int i=1; i<=mm; i++)
    {
        if (vct[i].size()==0) continue;
        sort(vct[i].begin(),vct[i].end());
        for (int j=0; j<vct[i].size(); j++){
            f[vct[i][j]]=vct[i][vct[i].size()-j-1];
        }
    }
    for (int i=1; i<=n; i++)
    {
        cout<<f[i]<< " ";
    }
    return 0;
}
