#include<bits/stdc++.h>
using namespace std;
int main(){

int x;
cin>>x;
for(int i=0;i<x;i++){
int a,b,c=0,d;
cin>>a;
int arr[a];
for(int h=0;h<a;h++){
        cin>>arr[h];

}

    for(int j=1;j<a;j++){
        if(arr[0]!=arr[j])
        {
           d=j;
           c++;
        }
    }
    if(c==1){
        cout<<d+1<<endl;
        c=0;
    }
     if(c==(a-1)){
        cout<<"1"<<endl;
c=0;
    }






}





}
