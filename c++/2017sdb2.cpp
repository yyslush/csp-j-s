#include<iostream>
using namespace std;
long long n;
int main()
 {
    int n,x=7,cnt = 0, k;
    cin>>n;
    for (int i = 1;k = n / i;i *= 10) {
        int high = k / 10;
        cnt += high * i;        
        int cur = k % 10;
        if (cur > x) cnt += i;
        else if (cur == x)  cnt += n - k * i + 1;        
    }
    cout<<cnt;    
   	return 0;	
}
