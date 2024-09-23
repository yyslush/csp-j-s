#include <iostream>
using namespace std; 
int n,m;
int main()
 {
    int f=0;
    cin>>n>>m;
    for (int i=1;i<=8;i++)
	 {
        if (n%2 && m%2)
		 {
            cout<<i<<" ";
            f++;
        }
        n/=2;
        m/=2;
    }
    if (f==0) cout<<0<<endl; else cout<<endl;
    if (f>1) cout<<"Open";  else cout<<"Close";
    return 0; 
} 
