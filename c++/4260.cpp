#include <iostream>
//#include <queue>
using namespace std;

struct date{
    int x1,x2,x3,index;
} q[10005],t;
int a,b,c,x,y,z,head,tail;

void print(int k){
    if(k==1) return;
    print(q[k].index);
    cout<<q[k].x1<<" "<<q[k].x2<<" "<<q[k].x3<<endl;
}

int main(){
    cin>>x>>y>>z;
    q[0].x1=x,q[0].x2=0,q[0].x3=0;
    q[0].index=0;
    cin>>a>>b>>c;
    head=tail=0;
    while(head<=tail){
        if(q[head].x1>0){
            q[++tail]=q[head];q[tail].index=head;
            if(q[tail].x1>=y-q[tail].x2) q[tail].x1-=(y-q[tail].x2),q[tail].x2=y;
            else  q[tail].x2+=q[tail].x1,q[tail].x1=0;
            if(q[tail].x1==a&&q[tail].x2==b&&q[tail].x3==c) {print(q[tail].index);break;}
            q[++tail]=q[head];q[tail].index=head;
            if(q[tail].x1>=z-q[tail].x3) q[tail].x1-=(z-q[tail].x3),q[tail].x3=z;
            else  q[tail].x3+=q[tail].x1,q[tail].x1=0;
            if(q[tail].x1==a&&q[tail].x2==b&&q[tail].x3==c) {print(q[tail].index);break;}
        }
        if(q[head].x2>0){
            q[++tail]=q[head];q[tail].index=head;
            if(q[tail].x2>=x-q[tail].x1) q[tail].x2-=(x-q[tail].x1),q[tail].x1=x;
            else  q[tail].x1+=q[tail].x2,q[tail].x2=0;
            if(q[tail].x1==a&&q[tail].x2==b&&q[tail].x3==c) {print(q[tail].index);break;}
            q[++tail]=q[head];q[tail].index=head;
            if(q[tail].x2>=z-q[tail].x3) q[tail].x2-=(z-q[tail].x3),q[tail].x3=z;
            else  q[tail].x3+=q[tail].x2,q[tail].x2=0;
            if(q[tail].x1==a&&q[tail].x2==b&&q[tail].x3==c) {print(q[tail].index);break;}
        }
        if(q[head].x3>0){
            q[++tail]=q[head];q[tail].index=head;
            if(q[tail].x3>=y-q[tail].x2) q[tail].x3-=(y-q[tail].x2),q[tail].x2=y;
            else  q[tail].x2+=q[tail].x3,q[tail].x3=0;
            if(q[tail].x1==a&&q[tail].x2==b&&q[tail].x3==c) {print(q[tail].index);break;}
            q[++tail]=q[head];q[tail].index=head;
            if(q[tail].x3>=x-q[tail].x1) q[tail].x3-=(x-q[tail].x1),q[tail].x1=x;
            else  q[tail].x1+=q[tail].x3,q[tail].x3=0;
            if(q[tail].x1==a&&q[tail].x2==b&&q[tail].x3==c) {print(q[tail].index);break;}
        }
        ++head;
    }
    cout<<tail<<endl;
    //for(int i=1;i<=tail;++i) cout<<q[i].x1<<" "<<q[i].x2<<" "<<q[i].x3<<endl;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
