#include<bits/stdc++.h>
using namespace std;
int main(){
int x,count=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    if(arr[i]==1){
      count++;
    }
}
if(count>0){
    cout<<"Hard";
}
else{
    cout<<"Easy";
}



}
