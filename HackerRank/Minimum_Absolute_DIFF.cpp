#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);



long long int c =1000000000;
for(int i=0;i<=n-2;i++){

  int g = abs(arr[i]-(arr[i+1]));

    if(g<c){
        c=g;

    }
}
cout<<c<<endl;


}
