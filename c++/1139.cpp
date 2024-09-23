#include<iostream>
using namespace std;
int a,b,c,d;
int main()
{
    cin >> a >> b;
    c = a / b;
	d = a % b;
    cout << a << "/" << b << "=" << c;
    if (d != 0)
	{
		int i=0;
		cout << ".";
		while(i<20 and d>0)
		{
			++i;
			d = d * 10;
        	cout << d / b;
       	 	d = d % b;
		}
		
	 } 
    else cout << ".0" <<endl;    
    return 0;
}
