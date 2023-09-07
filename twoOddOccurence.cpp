#include<bits/stdc++.h>
using namespace std;

void printOdd(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if (arr[j]==arr[i])
                count++;
        }
        if (count%2!=-0)
            cout<<arr[i]<<" ";
    }
}

void hashprintOdd(int arr[],int size){
    unordered_map<int ,int>mp;
    for(int i=0;i<size;i++){
        if(mp.find(arr[i])!=mp.end()){
            mp[arr[i]]+=1;
        }
        else 
            mp[arr[i]]=1;
    }
    for(auto it:mp){
        if (it.second %2 !=0)
            cout<<it.first<<" ";
    }

}

int main(){
    int arr[]={10,3,3,5,2,2,2,2,7,7,3,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"THe elements occuring odd no. of times: ";
    printOdd(arr,size);
    cout<<endl;
    hashprintOdd(arr,size);
}