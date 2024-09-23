#include <iostream>
#include <algorithm>
using namespace std;

int n,p=0;
char ch;
int a[1000005];

void siftup(int k)
{
  while(k>1&&a[k>>1]>a[k])
  {
    swap(a[k],a[k>>1]);
    k=k>>1;
  }
  return;
}
void siftdown(int k)
{
  bool flag=0;
  while((k<<1)<=p&&!flag)
  {
    int t=k;
    if(a[k]>a[k<<1]) t=k<<1;
    if((k<<1)+1<=p)
      if(a[t]>a[(k<<1)+1]) t=(k<<1)+1;
    if(t!=k)
    {
      swap(a[t],a[k]);
      k=t;
    }
    else flag=1;
  }
  return ;
}

int main()
{
  cin>>n;
  getchar();
  for(int i=1;i<=n;++i)
  {
    scanf("%c",&ch);
    if(ch=='i')
    {
      scanf(" %d\n",&a[++p]);
      siftup(p);
    }
    else
    {
      getchar();
      printf("%d\n",a[1]);
      a[1]=a[p--];
      siftdown(1);
    }
  }
  return 0;
}
