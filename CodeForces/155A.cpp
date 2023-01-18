#include<bits/stdc++.h>
using namespace std;
int main(){
int x,high=0,low=0,max,min;
cin>>x;
int array[x];
for(int j=0;j<x;j++){
    cin>>array[j];
}
max=min=array[0];
for(int i=0;i<x;i++){
if(max<array[i]){
    max=array[i];
    high++;
}
if(min>array[i]){
    min=array[i];
    low++;
}
}
cout<<high+low;
}
