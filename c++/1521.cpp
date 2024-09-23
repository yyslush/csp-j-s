#include <iostream>
using namespace std;

int n;

void doit(int x)
{
  if(x==1) cout<<"2(0)";
  else if(x==2) cout<<"2";
  else if(x==3) cout<<"2+2(0)";
  else
  {
    int bi=0,xx=x;
    while(xx>1)
    {
      xx/=2;
      ++bi;
    }
    for(int i=1;i<=bi;++i) xx=xx*2;
    //xx=pow(2,bi);
    if(xx==x)
    {
      cout<<"2(";
      doit(bi);
      cout<<")";
    }
    else
    {
      cout<<"2(";
      doit(bi);
      cout<<")+";
      doit(x-xx);
    }
  }

}

int main()
{
  cin>>n;
  doit(n);
  return 0;
}
