#include<iostream>
using namespace std;
int n;
void bite(int n)
{
    if (n==0) return ;
    cout << n%10;
    bite(n/10);
}
int main()
{
    cin >> n;
    bite(n);    
    return 0;
}
