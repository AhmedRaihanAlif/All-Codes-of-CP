#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x,c=1;
      cin>>x;
     int arr[x];
     if(x%2==0){

     for(int i=0;i<x;i+=2){
            int a=c;
            int b=++c;
       arr[i]=b;
       arr[i+1]=a;
       c++;
     }
      for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     }
     else{
            int c=4;
     arr[0]=3;
     arr[1]=1;
     arr[2]=2;


     for(int i=3;i<x;i+=2){
            int a=c;
            int b=++c;
       arr[i]=b;
       arr[i+1]=a;
       c++;
     }
      for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

     }
    }



}


