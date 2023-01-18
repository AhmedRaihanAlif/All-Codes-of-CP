#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[3];
for(int i=0;i<3;i++){
    cin>>arr[i];
}
sort(arr,arr+3);
int count=0;
for(int i=0;i<3;i++){
   if(arr[i]==arr[i+1]){
    count++;
   }
}
if(count==1){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}
