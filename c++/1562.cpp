#include<iostream>
#include<cstdio>
#include<string>  
using namespace std;
string str;
void fbi(int l,int r)
{
    if(l>r)
        return ;
    int mid=(l+r)/2,B=0,I=0;
    if(l!=r){
        fbi(l,mid);
        fbi(mid+1,r);
    }
    while(l<=r)if(str[l++]=='0')B++;else I++;
    if(B!=0&&I!=0) printf("F");
    else if(I!=0&&B==0)printf("I");
    else printf("B");


}
int main ()
{
    int n;
    scanf("%d",&n);
    cin>>str;
    fbi(0,(int)str.size()-1);
    printf("\n");
    return 0;
}
