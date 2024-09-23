#include <iostream>
#include <cmath>
using namespace std;
int n,l,m,x;
double r,f[300005][2],a[100005][2];

int main()
{
  cin>>n;
  for(int i=1;i<=n;++i)
  {
    cin>>l>>m>>x>>r;
    r/=2;
    double t1,t2;
    for(int j=1;j<=m;++j){
        scanf("%lf%lf",&t1,&t2);
        a[j][0]=t1-r;a[j][1]=t2+r;
    }
    //for(int j=1;j<=m;++j)
        //printf("%0.1lf   %0.1lf\n",a[j][0],a[j][1]);
    int h=1,p=0,q=0;
    while(a[p+1][1]-x<=a[1][0]){
        f[++q][0]=a[++p][1];
        f[q][1]=min(a[1][0]+x,a[p+1][0]);
    }
    while(h<=q){
      cout<<h<<" "<<f[h][0]<<" "<<f[h][1]<<endl;
      if(f[q][1]+x>=a[m][1]){
          f[q+1][1]=f[q++][1]+x;
          break;
      }
      double le=f[h][0]+x,ri=f[h][1]+x;
      //cout<<le<<" "<<ri<<" "<<p<<endl;
      while(ri>=a[p+1][1]&&le>=a[p+1][0]) ++p;
      while(le<=a[p+1][0]&&ri>a[p+1][1]){
          le=max(le,a[p][1]);
          ri=a[++p][0];
          if(le<=ri)
            f[++q][0]=le,f[q][1]=ri;
          le=a[p][1]+r;
      }
      //cout<<p<<" "<<a[p][0]<<" "<<a[p][1]<<endl;
      if(ri>=a[p][1]&&ri<=a[p+1][1]){
          le=max(le,a[p][1]);
          ri=min(ri,a[p+1][0]);
          if(le<=ri)
            f[++q][0]=le,f[q][1]=ri;
          int t=(a[p+1][0]-ri)/x;
          if(t>0) f[q][0]+=x*t,f[q][1]+=x*t;
      }
      //cout<<t<<endl;
      ++h;
      cout<<q<<" "<<f[q][0]<<" "<<f[q][1]<<endl;
    }
    if(f[q][1]>=a[m][1]) cout<<"Yes"<<endl; else cout<<"No"<<endl;
  }
  return 0;
}
