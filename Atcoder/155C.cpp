#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
string  arr[x];
int visited[x];
for(int i =0;i<x;i++){
    cin>>arr[i];
    visited[i]= -1;
}

for(int i=0;i<x;i++){
       int count=1;
for(int j=i+1;j<x;j++){
    if(arr[i]==arr[j]&&visited[i]==-1) {
    visited[j]=0;
    count++;
    }
   }
   if(visited[i]==0){
    continue;
   }
   else{
    visited[i]=count;
   }
}
cout<<endl;
for(int i=0;i<x;i++){
        if(visited[i]!=0){
    cout<<arr[i]<<"   "<<visited[i]<<endl;
        }
}
int max =visited[0];
for(int i=0;i<x;i++){
    if(max<visited[i]){
            max=visited[i];
         visited[i]=max;

    }

}

    cout<<endl<<max<<endl;




}





