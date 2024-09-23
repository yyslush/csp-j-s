#include<cstdio>
using namespace std;
int a[10005],f[100005];

int main()
{
	int m,n;
	scanf("%ld%ld",&m,&n); 
	for(int i=1;i<=n;++i) scanf("%d",&a[i]);
	for(int i=1;i<=n;++i)
		for(int j=m;j>=a[i];--j)
			if (f[j]<f[j-a[i]]+a[i]) f[j]=f[j-a[i]]+a[i];
	printf("%ld",f[m]);
	return 0;		
}
