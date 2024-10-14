#include<iostream>
using namespace std;

int n,mul=1;

void dfs(int n){
    if(n==1)
        return ; 
    
    mul*=n;
    dfs(n-1);
}

int main(){

    cin>>n;
    dfs(n);
    cout<<mul;
    
    return 0;

}