#include<iostream>
using namespace std;

int n;

int dfs(int n){
    if(n==1)
        return 1; 
    
    return n*dfs(n-1);
}

int main(){

    cin>>n;
    cout<<dfs(n);
    
    return 0;

}