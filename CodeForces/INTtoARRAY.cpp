#include <bits/stdc++.h>
using namespace std;
int main(){
int num;
int counts=1;
cin>>num;
int arr[4];
for(int i=3;i>=0;i--){
    arr[i]=num%10;
    num=num/10;
    }
for(int i=0;i<=3;i++){
        cout<<arr[i]<<endl;
}
}

