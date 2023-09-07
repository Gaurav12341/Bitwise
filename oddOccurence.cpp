#include<bits/stdc++.h>
using namespace std;

int occurencewithbit(int arr[],int size){
    int res=arr[0];
    for(int i=1;i<size;i++){
        res=(res^arr[i]);
    }
    return res;
}

int main(){
    int arr[]={4,4,7,4,8,7,7,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"The element with odd occurence is: "<<occurencewithbit(arr,size);
}