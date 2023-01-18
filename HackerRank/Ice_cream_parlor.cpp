#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
for(int i=0;i<n;i++){

    int x,a;
    cin>>x;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int j=0;j<a;j++){
    for(int i=j+1;i<a;i++){
      if(arr[j]+arr[i]==x){
        cout<<j+1<<" "<<i+1<<endl;

      }
    }
    }

}


}
