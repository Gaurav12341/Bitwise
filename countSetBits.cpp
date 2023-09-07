#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int count=0;
    while (n>0)
    {
        if((n&1)!=0)
            count++;
        n=n/2;
    }
    return count;
    
}

int brianAndKerningham (int n){
    int count=0;
    while(n>0){
        n=(n&(n-1));   //unset the last set bit  O(set bits)
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<"The no. of set bits in n is: "<<countSetBits(n)<<" "<<brianAndKerningham(n);
    
}