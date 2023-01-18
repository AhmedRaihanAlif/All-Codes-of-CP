#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int arr[x];
int count=0;
for(int i=0;i<x;i++){
    cin>>arr[i];
    }
for(int i=0;i<x;i++){
   if(arr[i]>=arr[y-1]&&arr[i]!=0){
       count++;
    }
    }

cout<<count;



}
