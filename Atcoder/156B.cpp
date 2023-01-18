#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,y;
   int arr[32];
   cin>>x>>y;
   int i=0,count=0;
   while(x>0){
    arr[i]=x%y;
    x=x/y;
    i++;
   }
int length = sizeof(arr);
cout<<length<<endl;
   for(int j=i-1;j>=0;j--){
    cout<<arr[j]<<endl;
    count++;
   }
   cout<<count;

}
