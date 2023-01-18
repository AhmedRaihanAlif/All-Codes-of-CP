#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
for(int i=0;i<x;i++){
int n,c=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
sort(arr,arr+n);

for(int i=0;i<n;i++){
    int z=arr[i]-arr[0];
    c+=z;
}

cout<<c<<endl;

}


}

