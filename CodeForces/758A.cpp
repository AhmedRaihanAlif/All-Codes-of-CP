#include<bits/stdc++.h>
using namespace std;
int main(){
int x,count=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
int k=*max_element(arr,arr+x);
for(int i=0;i<x;i++){
  if(arr[i]<k){
    int a=k-arr[i];
    count+=a;
  }
  else{
    count+=0;
    continue;
  }

}
cout<<count;
}
