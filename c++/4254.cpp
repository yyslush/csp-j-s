#include <iostream>
#include <cmath>
using namespace std;

int w1,w2,w3;

int main(){
    cin>>w1>>w2>>w3;
    if(w1<w2) swap(w1,w2);
    if(w1<w3) swap(w1,w3);
    cout<<abs(w1-w2-w3);
    return 0;
}
