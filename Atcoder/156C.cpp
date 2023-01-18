#include<bits/stdc++.h>
using namespace std;
int main(){
   int x;
   cin>>x;
   int arr[x];
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   int k=0;
for(int i=0;i<x;i++){
  int g=(arr[i]-x);
  int h=g*g;
  k=k+h;


   }
   cout<<k;
}
