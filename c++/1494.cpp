#include <iostream>
#include <cmath>
using namespace std;

int n,k,a=0,b=0,ta=0,tb=0,t1,t2,temptime=0;
char f='m';

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i)
  {
    cin>>k;
    scanf("%d:%d",&t1,&t2);
    if(k==1) ++a;else ++b;
    if(a==b)
    {
      if(k==1)
        tb=tb+t1*60+t2-temptime;
      else
        ta=ta+t1*60+t2-temptime;
      f='m';
    }
    if(a>b&&f=='a') ta=ta+t1*60+t2-temptime;
    if(a<b&&f=='b') tb=tb+t1*60+t2-temptime;
    if(a-b==1) f='a';
    if(b-a==1) f='b';
    temptime=t1*60+t2;
    cout<<ta<<" "<<tb<<" "<<temptime<<" "<<f<<endl;
  }
  if(k==2)
  {
    if(a<b) tb+=48*60-temptime;
    if(a>b) ta+=48*60-temptime;
  }
  if(k==1)
  {
    if(a<b) tb+=48*60-temptime;
    if(a>b) ta+=48*60-temptime;
  }
  t1=ta/60;t2=ta%60;
  if(t1<10) cout<<0<<t1; else cout<<t1;cout<<":";if(t2<10) cout<<0<<t2; else cout<<t2;cout<<endl;
  t1=tb/60;t2=tb%60;
  if(t1<10) cout<<0<<t1; else cout<<t1;cout<<":";if(t2<10) cout<<0<<t2; else cout<<t2;
  return 0;
}
