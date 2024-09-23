#include <iostream>
#include <cstring>
using namespace std;

int n,step=0,l,x;
char c[20];
int b[20]={0},a[20];
void changch()
{
  for(int i=0;i<l;++i)
    if(c[i]>='A'&&c[i]<='F') a[i]=c[i]-'A'+10;else a[i]=c[i]-'0';
}
bool judge()
{
  bool f=true;
  memset(b,0,sizeof(b));
  for(int i=0;i<l;++i)
  {
    b[i]=b[i]+a[i]+a[l-i-1];
    b[i+1]=b[i]/n;
    b[i]%=n;
  }
  if(b[l]>0) l++;
  //for(int i=0;i<l;++i) cout<<b[i]<<" ";cout<<endl;
  for(int i=0;i<l;++i) a[i]=b[i];
  for(int i=0;i<l/2;++i)
      if(b[i]!=b[l-i-1]) return false;
  return true;
}

int main()
{
  cin>>n;
  scanf("%s",&c);
  l=strlen(c);
  changch();
  while(++step<=30)
  {
    if(judge()) break;
  }
  if(step<=30) cout<<"STEP="<<step; else cout<<"Impossible!";
  return 0;
}
