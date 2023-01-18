#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,count =0,sum=0;
cin>>n>>k;
int u=240-k;
for(int i=1;i<=n;i++){
    int l=i*5;
    sum=sum+l;

    if(sum<=u){

        count++;
    }
    else{break;}
}
cout<<count;
}
