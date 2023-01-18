#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;

cin>>n;

long long  int arr[n];


for(long long int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
cin>>m;
long long int arr2[m];
for(long long int i=0;i<m;i++){
    cin>>arr2[i];
}
sort(arr2,arr2+m);
int j=0;
for(long long int i=0;i<m;i++){
   if(arr2[i]==arr[j]){

    j++;
   }

    else{
        cout<<arr2[i]<<" ";

    }
}






}







