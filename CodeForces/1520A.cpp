#include<bits/stdc++.h>
using namespace std;
int main(){
int x,n;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
char arr[x];

for(int i=0;i<x;i++){
    cin>>arr[i];
}
int c=0;
for(int i=0;i<x-1;i++){
   if(arr[i]!=arr[i+1]){
  for(int j=i+1;j<x;j++){
    if(arr[i]==arr[j]){
        cout<<"No"<<endl;
        j=x;
        i=x;
        c=1;
    }
  }

   }


}
if(c==0){
    cout<<"yES"<<endl;
}


}
}
