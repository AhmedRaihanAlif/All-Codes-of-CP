#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,j;
    cin>>x;
    int arr[x][x];
    for(int i=0;i<x;i++){
        for( j=0;j<x;j++){
            if(i==0||j==0){
                arr[i][j]=1;
            }
            else{
                    int k =arr[i-1][j]+arr[i][j-1];
                    arr[i][j]=k;
            }}}
cout<<arr[x-1][x-1];
}
