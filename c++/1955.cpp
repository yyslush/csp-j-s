#include <iostream>
using namespace std;
long long a[50];

int main()
 {
    int k;
    cin>>k;
    a[1]=1;
    a[2]=1;
    a[3]=3;   
    for(int i=4;i<=k;i++)   a[i]=(a[i-1]+a[i-2])*2;     
    cout<<a[k]<<endl;
    return 0;
}
