#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open(){ char ch; cin >> ch; }
int main()
{
    cout << "How many primes do you want to find out?";
    int n, upper_limit, i, multiple, k;
    cin >> n;
    upper_limit = 3 * n*(log(n) + log(log(n)) - 1); //根据Rosser定理而来，由于Rosser定理在n足够大时渐进效果较好，所以乘3做扩大。
    vector<int>primes;
    for (i = 0; i <= n; ++i)
        primes.push_back(1);   //向量元素值若为1，则元素序数为质数；向量元素若为0，则元素序数不是质数。初始时假设所有数皆为质数。
    primes[0] = 0;
    primes[1] = 0;      ////0,1都不是质数   
    for (i = 2; i <= sqrt(n); ++i)
    {
        if (primes[i] == 1)
        {
            for (multiple = 2; i*multiple <= n; ++multiple)
                primes[i*multiple] = 0;
        }
    }
    for (k = 2; k <= n + 1; ++k)
    {
        if (primes[k] == 1)
            cout << k << endl;
    }
}
