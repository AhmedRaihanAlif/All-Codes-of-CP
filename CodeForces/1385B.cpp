#include<bits/stdc++.h>
using namespace std;
int main(){
int x,a;
cin>>x;
for(int i=0;i<x;i++){
    int n;
    cin>>n;
    int k=2*n;
    int arr[k],arr1[k];
    for(int j=0;j<k;j++){
        cin>>arr[j];
        arr1[j]=0;
    }
    for(int r=0;r<k;r++){
        int e = arr[r];
        if(arr1[e]==0){
              arr1[e]=e;
            cout<<e<<" ";
        }
    }
    cout<<endl;


}

}
