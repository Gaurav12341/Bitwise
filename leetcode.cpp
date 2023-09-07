#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1{1,2,3,4};
    vector<int> v2{4,5,6,7};

    vector <int>v1(v2);
    for(auto it:v1){
        cout<<it<<" ";
    }
 }