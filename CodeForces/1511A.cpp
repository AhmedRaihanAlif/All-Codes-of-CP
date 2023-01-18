#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x,c=0;
    cin>>x;
    int arr[x];
    for(int j=0;j<x;j++){

        cin>>arr[j];
        if(arr[j]==1||arr[j]==3){
            c++;
        }
    }
    cout<<c<<endl;
}
}
