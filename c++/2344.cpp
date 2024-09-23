#include<iostream> 
using namespace std; 
long long m,n; 
int main() 
{ 
    cin>>m>>n; 
    n+=1000000000000000000; 
    m+=1000000000000000000; 
    cout<<(n/2+n/4-m/2-m/4)<<endl;   
    return 0; 
}  
