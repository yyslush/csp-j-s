#include<iostream>
#include<cstring>
using namespace std;
bool c[16];
int a[16],b[16],d[16],e[16],r[31]={1,1};
void lc(int c)
{
     int j=0;
     for(int i=1;i<=r[0];i++)
     {
        r[i]=r[i]*c+j;
        j=r[i]/10;
        r[i]%=10;
     }
     if(j>0)
        r[++r[0]]=j;
}
int main()
{
    string n;
    int k,i,l,j,t,w;
    cin>>n>>k;
    l=n.length();
    for(i=1;i<=k;i++) cin>>a[i]>>b[i];
    for(i=0;i<=9;i++)
    {
        t=w=1;
        d[1]=i;
        memset(c,0,sizeof(c));
        c[i]=1;
        do
        {
               for(j=1;j<=k;j++)
                  if(a[j]==d[t] && c[b[j]]==0)
                     c[d[++w]=b[j]]=1;
        }while(++t<=w);
        e[i]=w;
    }
    for(i=0;i<l;i++)    lc(e[n[i]-'0']);
	for(i=r[0];i>0;i--)   cout<<r[i];  
   	return 0;
}
