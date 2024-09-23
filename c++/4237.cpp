#include <iostream>
using namespace std;
int l=-1,n,count,a[100],b[32]={0};
long long k;
 
int main()
{
  k=1;
  while(k<=2000000000) a[++l]=k,k<<=1;  
  cin>>n;
  for(int i=1;i<=n;++i)
  {
    int t;
    cin>>t;
    int p=l;
    while(p>=0&&a[p]>t)--p;
    b[p]++;    
    count=b[0],t=b[0];
    for(int j=1;j<=29;++j)
    {
      t+=b[j];
      if(b[j]>count)
      {
        int k;
        if(t%(j+1)==0) k=t/(j+1);else k=t/(j+1)+1;
        count=max(count,k);        
      }      
    }
    cout<<count<<endl;
  }
  return 0;
}
 
