#include<bits/stdc++.h>
using namespace std;

int kthbit(int n, int k){
    for(int i=0;i<k-1;i++){
        n=n/2;
    }
    if((n&1)==1)
        return 1;
    return 0;
}

int kthbit2(int n,int k){
    int x=(n>>(k-1)); //= floor of n/2^(k-1)
    if((x&1)!=0)
        return 1;
    return 0;

}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<"The kth bit of n is set: "<<kthbit(n,k);
}