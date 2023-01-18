#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[3],c;
for(int i=0;i<3;i++){
    cin>>arr[i];
}
int min=300;
sort(arr,arr+3);

for(int i=0;i<3;i++){
        int sum=0;
   for(int j=0;j<3;j++){
  c= arr[i]-arr[j];
    sum+=abs(c);
   }
    if(sum<min){
        min = sum;
    }
}
cout<<min;

}
