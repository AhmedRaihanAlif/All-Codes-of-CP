#include <bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
int n;
int ans[a];
for(int i=0;i<a;i++){
    cin>>n;
    int arr[n],x=1;
    for(int j=0;j<n;j++){
        arr[j]=pow(2,x);
        x++;
    }
    if(n==2){
            ans[0]=arr[1]-arr[0];
            cout<<ans[0]<<endl;
            }
        else{
     int k=0,s=0;
     int h = n/2;
    for(int i=h-1;i<n-1;i++){
        k+=arr[i];
        }
        for(int i=0;i<h-1;i++){
            s+=arr[i];
        }
        s=s+arr[n-1];
    int anss=s-k;
       cout<<anss<<endl;

        }

}


}
