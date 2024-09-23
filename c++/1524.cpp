
#include<cstdio>
#include<cstring>
#define maxn 10
using namespace std;
int n,a[30];
char s[15][15][maxn];
int main()
{
 // freopen("1.in","r",stdin);
  int i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      scanf("%s",s[i][j]);
  memset(a,90,sizeof(a));
  for(i=2;i<=n;i++)
    {
      for(k=0,j=2;j<=n;j++)
        if(strlen(s[i][j])>1)k++;
      a[s[i][1][0]-'A']=k;
    }
  for(k=0,i=0;i<26;i++)
    if(a[i]!=a[29])
    {
      printf("%c=%d ",'A'+i,a[i]);
      k++;
      if(k<n-1)printf(" ");
    }
  printf("\n%d\n",n-1);
  return 0;
}
