#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
int s=0,h=4;
for(int i=0;i<n;i++){
    cin>>arr[i];
    s+=arr[i];
}

if(s%4==0){
        int g= s/h;
        cout<<g;
}
else{
        int f=ceil(s/h);
        cout<<f+1;

}

}
