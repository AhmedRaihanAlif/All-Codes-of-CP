#include <bits/stdc++.h>
using namespace std;
int main(){
   int c;
   cin>>c;
 int arr[c];
   for(int i=0;i<c;i++){
    cin>>arr[i];
   }

     for(int i=0;i<c;i++){
   int f=arr[i]%5;
   int g = arr[i]-f;
   int result= (g+5);
   if((result-arr[i])<3&&result>=40){
    arr[i]=result;
   }
   else if((result-arr[i])<40){
    continue;
   }
   else if((result-arr[i])>=3){
    continue;
   }
   }

    for(int i=0;i<c;i++){
    cout<<arr[i]<<endl;
   }

}
