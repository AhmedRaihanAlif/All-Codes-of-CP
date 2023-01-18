#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,e,mins=1000;
cin>>x;
int arr1[x];
for(int i=0;i<x;i++){
    cin>>arr1[i];
    int y=arr1[i];
    int arr[y];
    for(int j=0;j<y;j++){
        cin>>arr[j];
        }
        sort(arr,arr+y);
for(int k=0;k<y;k++){
    if(k==y-1){
        break;
    }
    else{
    int u=arr[k+1]-arr[k];
    if(u<=mins){
        mins=u;
    }
}
}
cout<<mins<<endl;

mins=1000;

}

}
