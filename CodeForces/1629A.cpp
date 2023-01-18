#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
   int x,y;
   cin>>x>>y;
   int arr1[x],arr2[x];
   for(int j=0;j<x;j++){
    cin>>arr1[j];
    }
for(int l=0;l<x;l++){
    cin>>arr2[l];
}
for(int i=0;i<x;i++){
    int s = *min_element(arr1, arr1 + x);
for(int j=0;j<x;j++){
        if(s<=y){
     if(arr1[j]<=y){
        y+=arr2[j];
        arr1[j]=1100000;
        }
      }
      }
    }
cout<<y<<endl;
    }
}
