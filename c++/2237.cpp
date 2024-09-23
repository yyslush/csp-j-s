#include<iostream>
using namespace std;
int n,top=0,l=0,a[1005],st[1005];
int main() 
{
    cin>>n;
    st[top]=0;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) 
    {
        while(st[top]!=a[i]&&top<n+1) 
        {
            l++;
            st[++top]=l;
            
        }
		//for(int j=1;j<=top;++j) cout<<st[j]<<" ";
		//cout<<endl;
        --top;
    }
    if (top==0) cout<<"YES"; else cout<<"NO";
    return 0;
}
