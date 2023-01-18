#include<bits/stdc++.h>
using namespace std;
int main(){

 int x;
cin>>x;
long long int arr[x];
 long long int c=100000000000000000;
for( int i=0;i<x;i++){
    cin>>arr[i];
}
int a=0;
while(a!=x-2){
for( int i=a+1;i<x;i++){
if(arr[a]>arr[i]){
        int s=arr[a]-arr[i];
            if(s<c){
              c=s;
                }

        }

    }
    a++;
}

cout<<c;
}
