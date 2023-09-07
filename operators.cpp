#include<bits/stdc++.h>
using namespace std;

void BitwiseAnd(int a,int b){
    cout<<"a&b is :"<<(a&b);
}

void BitwiseOr(int a,int b){
    cout<<"a|b is: "<<(a|b);
}

void BitwiseXOR(int a,int b){
    cout<<"a^b is: "<<(a^b);
}

void LeftShift(int a,int b){
    cout<<"(a<<b) is: "<<(a<<b);
}

void RightShift(int a,int b){
    cout<<"(a>>b) is: "<<(a>>b);
}

void BitNot(int a){
    cout<<(~a);
}

int main(){
    int a,b;
    cin>>a>>b;
    BitwiseAnd(a,b);
    cout<<endl;
    BitwiseOr(a,b);
    cout<<endl;
    BitwiseXOR(a,b);
    cout<<endl;
    LeftShift(a,b);
    cout<<endl;
    RightShift(a,b);
    cout<<endl;
    unsigned int d=1;
    cout<<(~d);

}

