#include<iostream>
#include<cmath>
using namespace std;
bool su(int);
int main ()
{
    //freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n,i; 
    cin>>n;    
    for(i=n/2;i>=2;--i)
    	if (su(n-i)==true&&su(i)==true) break;   
    cout<<i*(n-i);
    //fclose(stdin);   
    //fclose(stdout);    
    return 0;
}
bool su(int n)
{
    for (int j=2;j<=(int(sqrt(n)));++j)
        if (n%j==0) return false;
    return true;            
}
