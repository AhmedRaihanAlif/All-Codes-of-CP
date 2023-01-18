#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
for(int i=0;i<x;i++){
    int y,sum=0;
    cin>>y;
    int k=y;
    int arr[k];
    for(int j=0;j<k;j++){
           y=y*2;
        if(y<1000){
                 cout<<y<<" ";}
        else{
                y=j*3;
              cout<<y<<" ";

        }
    }
    cout<<endl;
}

}
