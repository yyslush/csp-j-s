#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i, j, k, s, t, f[10001][31];
	cin >> n >> s;
	f[0][0] = 1;
	for (i = 1; i <= floor(sqrt(s)); i++)
		for (j = s; j >= i*i; j--)
			for (k = 1; k <= n; k++)
			{
				f[j][k] = f[j - i*i][k - 1] + f[j][k];
			}
	t = 0;
	for (i = 1; i < s; i++) t = t + f[i, n];
	cout << t;

}