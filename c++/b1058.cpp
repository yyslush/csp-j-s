#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
	cin>>a>>b>>c;
	if (b*b-4*a*c==0) 
	{
		cout<<"x1=x2=";
		printf("%0.5lf",(-b/(2*a)));
	}
	if (b*b-4*a*c>0)
		printf("x1=%0.5lf;x2=%0.5lf",(-b-sqrt(b*b-4*a*c)/(2*a)),(-b+sqrt(b*b-4*a*c)/(2*a)));

	if(b*b-4*a*c<0)
	   {
	   		printf("x1=%0.5lf+%0.5lfi",(-b)/(2*a),sqrt((4*a*c-b*b))/(2*a));
	   		cout<<";";
	   		printf("x2=%0.5lf-%0.5lfi",(-b)/(2*a),sqrt((4*a*c-b*b))/(2*a));
	   }
	//fclose(stdin);  
    //fclose(stdout);
	return 0;   
}
