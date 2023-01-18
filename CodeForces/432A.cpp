#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y,k=0;;
cin>>x>>y;
int arr[x];
for(int i=0;i<x;i++){
   cin>>arr[i];

    }
    sort(arr,arr+x);
  for(int i=0;i<x;i++){
        if(5-arr[i]>=y){
            k++;
        }

    }
    cout<<k/3;
}
