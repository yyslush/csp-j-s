#include <isotream>
using namespace std;
struct date
{
  double dl,p;
} a[10];

int n;
double l,c,d;

int main()
{
  cin>>l>>c>>d>>a[1].p>>n;
  a[1].dl=0;
  for(int i=2;i<=n;++i) cin>>a[i].dl>>a[i].p;


}
