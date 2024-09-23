#include<iostream>
using namespace std;
string n;
int t,can[11][11];
int main()
{
    cin>>n>>t;
    int x,y;
    while(t--){cin>>x>>y,can[x][y]=1;}
    for(int k=0;k<10;k++)
       for(int j=0;j<10;j++)
           for(int i=0;i<10;i++)
             if(i!=j&&j!=k&&i!=k)
                if(can[i][k]==1&&can[k][j]==1)can[i][j]=1;
    long long sum=1;
    for(int i=0;i<n.length();i++)
    {
        int n1=n[i]-'0',change=1;
        for(int j=0;j<10;j++)
            if(can[n1][j]==1&&n1!=j)change++;
        sum*=change;
    }
    cout<<sum;
    return 0;
}
