#include <bits/stdc++.h>
using namespace std;
    int main(){
    int n,count=0;
    cin>>n;
    char arr[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
           arr[i]='z';
        }
    }
   }
    for(int i=0;i<n;i++){
    if(arr[i]=='z'){
        continue;
    }
    else{
        count++;
    }
   }

   if(count!=26){
    cout<<"NO";
   }
   else{cout<<"YES";}

}
