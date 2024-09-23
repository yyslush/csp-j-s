#include<iostream> 
#include<cstdio>
using namespace std; 
int main() 
{ 
    long long a,b,c;  
	//freopen("test/genius10.in","r",stdin);
    //freopen("test/genius.out","w",stdout);   
    while (scanf("%ld%ld%ld",&a,&b,&c)&&(a!=0&&b!=0&&c!=0)) 
       if (a*c % b != 0);cout<<a*c/b<<endl; 
    //fclose(stdin);   
   	//fclose(stdout);
    return 0; 
} 

