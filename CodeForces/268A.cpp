#include <bits/stdc++.h>
using namespace std;
int main(){
int x,count=0;
cin>>x;
int arr[x][2];
for(int i=0;i<x;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<x;i++){

    for(int k=0;k<x;k++){
        if(arr[i][0] == arr[k][1]){
            count++;
        }


    }
}
cout<<count;
}
