#include<iostream>
using namespace std;

int n,mul=1;

void dfs(int n){

    for(int i=n;i>=1;--i)
        mul*=i;

}

int main(){

    cin>>n;
    dfs(n);
    cout<<mul;
    return 0;

}