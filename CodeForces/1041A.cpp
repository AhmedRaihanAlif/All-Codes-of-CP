#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
   int c=0;
    sort(arr,arr+x);
     for(int i=0;i<x-1;i++){
        int s = arr[i+1]-arr[i];
        if(s>1){
        c+=s-1;

        }
    }
    cout<<c;

}
