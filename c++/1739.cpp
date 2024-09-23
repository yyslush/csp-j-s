#include <iostream>
using namespace std;

int main()
{
    int N;  //奶牛个数
    while (cin>>N)
    {
        int *a = new int [N];  //动态一维数组  存放奶牛编号
        int i, num1=0, num2=0, num3=0;  
        for (i = 0; i < N; ++i)
        {
            cin >> a[i];
            if (a[i] == 1)
                num1++;  //编号为1 的奶牛个数
            else if (a[i] == 2)
                num2++;  //编号为2 的奶牛个数
            else
                num3++;  //编号为3 的奶牛个数
        }
        int res = 0;    //交换次数
        for (i = 0; i < num1; i++)   //遍历0~（num1-1）
        {
            if (a[i] != 1)    //编号不为1 则需要交换
                res++;
        }
        for (i = num1; i < num1+num2; i++)  //遍历num1~（num1+num2-1）
        {
            if (a[i] == 3)//编号为3则需要交换（因为编号2不用交换，编号1已统计过次数）
                res++;
        }
        cout << res << endl;  //输出交换次数
    }   
    return 0;
}
