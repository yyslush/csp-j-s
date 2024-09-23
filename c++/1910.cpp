#include<iostream>
using namespace std;

int n,x,y;
int mp[200][200];
int main()
{
    cin>>n;
    x = 1,y = (n+1)/2;
    mp[x][y]=1;
    for(int i=2;i<=n*n;i++)
    {
        if(x==1&&y!=n)
            x=n,y++;
        else if(x!=1&&y==n)
            x--,y=1;
        else if(x==1&&y==n)
            x++;
        else if(!mp[x-1][y+1])
            x--,y++;
        else
            x++;
        mp[x][y]=i;
    }
    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=n;j++) 
			if (j<n) cout<<mp[i][j]<<" "; else cout<<mp[i][j]<<endl;        
    }
}
