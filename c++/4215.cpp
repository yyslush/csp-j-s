#include <iostream>
using namespace std;
int n,m;
long long sum;
int main(){
    cin>>n>>m;
    if(m>n) swap(m,n);
    for(int i=1;i<=m;++i)
        sum+=(m-i+1)*(n-i+1);
    cout<<sum;
    return 0;
}
