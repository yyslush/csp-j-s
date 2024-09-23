#include <cstdio>  
int n, a[1000000];  
int max, recMin, sum, l, recL, recR;  
  
int main() {  
    int k;  
    scanf("%d", &k);  
    for (int cas = 1; cas <= k; cas++) {  
        scanf("%d", &n);  
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);  
        max = -0xfffffff;  
        sum = 0;  
        recMin = 0;  
        l = -1;  
        recL = -1, recR = 0;  
        for (int i = 0; i < n; i++) {  
            sum += a[i];  
            if (sum - recMin > max) {  
                max = sum - recMin;  
                recL = l;  
                recR = i;  
            }  
            if (recMin > sum) {  
                recMin = sum;  
                l = i;  
            }  
        }  
        if (cas - 1) printf("\n");  
        printf("Case %d:\n%d %d %d\n", cas, max, recL + 2, recR + 1);  
    }  
    return 0;  
}  
