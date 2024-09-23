#include <iostream>
 
using namespace std;
 
int n, k, t, p, f[150000], tot;
 
int main()
{
    cin>>k>>n;
    while(n --)
	{
        scanf("%d%d", &t, &p);
        tot += p;
        for(int i = k ; i >= t ; i --){
            f[i] = max(f[i], f[i - t] + p);
        }
    }
    printf("%d\n", tot - f[k]);
    return 0;
}
