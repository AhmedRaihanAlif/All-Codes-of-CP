#include<bits/stdc++.h>
using namespace std;
int main(){
int x,count=0;
cin>>x;
int arr[x];
for(int i =0;i<x;i++){
    cin>>arr[i];
}
for(int i =0;i<x;i++){
  if(arr[i]%2==0){
    if(arr[i]%3==0||arr[i]%5==0){
        continue;
    }
    else{
        count++;
    }
  }
}
if(count==0){
    cout<<"APPROVED";
}
else{
    cout<<"DENIED";
}
}
