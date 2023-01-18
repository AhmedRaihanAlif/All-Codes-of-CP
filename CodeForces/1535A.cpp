#include <bits/stdc++.h>
using namespace std;
int main(){
int x,a,b,c,d;
int arr[4];
cin>>x;
for(int i=0;i<x;i++){
   for(int j=0;j<4;j++){
    cin>>arr[j];
   }

   if(arr[0]<arr[1]){
    a=arr[1];
    b=arr[0];
   }
   else{
    a=arr[0];
    b=arr[1];
   }
   if(arr[2]<arr[3]){
    c=arr[3];
    d=arr[2];
   }
   else{
    c=arr[2];
    d=arr[3];
   }


   sort(arr,arr+4);
   if((arr[2]==a||arr[2]==c) && (arr[3]==a||arr[3]==c) ){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

}
}
