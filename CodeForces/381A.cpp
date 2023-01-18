#include<bits/stdc++.h>
using namespace std;
int main (){
int x,sereja=0,dima=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}

int i=0;
int j=x-1;
for(int k=0;k<x;k++){
   if(k%2==0){
       if(arr[i]>arr[j]){
        sereja+=arr[i];
        i++;
    }
    else{
     sereja+=arr[j];
     j--;
    }
   }
   else{
    if(arr[i]>arr[j]){
        dima+=arr[i];
        i++;
    }
    else{
    dima+=arr[j];
    j--;
    }
   }




}
cout<<sereja<<" "<<dima;


}
