#include<bits/stdc++.h>
using namespace std;

void powerSet(string s){
    int n=s.length();
    int psize=(1<<n); // (x<<n)= x*2^n
    for (int i = 0; i < psize; i++)
    {
        
    }
    
}

int main(){
    string a;
    getline(cin,a);
    cout<<"All subsets of the string a is: ";
    powerSet(a);
}