#include<bits/stdc++.h>
using namespace std;
int main(){
int x,n,d,a,c,s;
cin>>x;

vector<int> arr;

for(int i=0;i<x;i++){
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>s;
        arr.push_back(s);
    }
    sort(arr.begin(),arr.end());
    for(auto& i:arr){
        if(i > d){
            /* a = arr.at(0)+arr.at(1);
            arr.at(i)=a;
        */
        cout<<arr.at(i)<<endl;
        }
    }

    int c=0;
 for(auto& i:arr){
    if(i<=d){
            cout<<i;
        c++;

    }
 }
    if(c==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

}
