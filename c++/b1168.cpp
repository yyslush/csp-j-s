#include<iostream>
#include<cmath>
using namespace std;
bool su(int);
int main ()
{
    //freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    int n; 
    cin>>n;
    for(int i=3;i<=n;++i)
    {
       if (su(i)&&su(i+2)) cout<<i<<" "<<i+2<<endl;
               
    }     
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
