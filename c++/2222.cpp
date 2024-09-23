#include<iostream>
using namespace std;
 
int n,m,b,g,x,y,l[5005]={0},r[5005]={0};
 
int main()
{
    cin>>n>>m>>b>>g;\
	int x1=0,y1=0;
    for(int i=1;i<=b;++i)
    {
        cin>>x>>y;
        for(int j=x;j<=y;++j) 
			if(l[j]==0) ++x1,l[j]=1;
    }
     
    for(int i=1;i<=g;++i)
    {
        cin>>x>>y;
        for(int j=x;j<=y;++j) 
        	if(r[j]==0) ++y1,r[j]=1;
    }
    
    /*
    for(int i=1;i<=n;++i) 
        if(l[i]) ++x;
    for(int i=1;i<=m;++i) 
        if(r[i]) ++y;*/
    cout<<x1<<" "<<y1<<endl;
    cout<<x1*m+y1*n-x1*y1;
    return 0;
}
