#include<bits/stdc++.h>
using namespace std;
int main(){
int x,count=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    int y=arr[i];
    int arr1[y];
    for(int j=0;j<y;j++){
        cin>>arr1[j];
    }
     if(y==1){
      cout<<"YES";
    }
    else{
    sort(arr1,arr1+y);
    for(int k=0;k<y;k++){
            if(k==y-1){
                break;
            }
            else{
    if((arr1[k+1]-arr1[k])<=1||(arr1[k+1]-arr1[k])==0){
        count++;
        }
    }
    }
    if(y-count==1){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }



}
count=0;
cout<<endl;
}
}

