#include<iostream> 
using namespace std; 
int main() 
{ 
    long long a,b,c;     
    while (cin>>a>>b>>c) 
    { 
        if(a==0&&b==0&&c==0) break; 
        if (a*c % b != 0) ;//cout<<"=="; 
        //else cout<<a<<" "<<b<<" "<<c<<endl; 
        cout<<a*c/b<<endl; 
    } 
    return 0; 
} 

