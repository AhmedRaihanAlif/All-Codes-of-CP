#include<bits/stdc++.h>
using namespace std;
int main(){
int x,count=0,c=0;
cin>>x;
int arr[x],arr1[x];
for(int i=1;i<=x;i++){
    cin>>arr[i];
}
int r=0;
for(int i=1;i<=x;i++){
   if(arr[i]==1){
       arr1[r]=i;
       r++;
    for(int j=1;j<=x;j++){
          if(arr[j]==2){
arr1[r]=j;
       r++;
           for(int k=1;k<=x;k++){
            if(arr[k]==3){
              arr1[r]=k;
          r++;
              count++;
              arr[k]=-1;
            break;
            }

           }
           arr[j]=-1;
           break;
          }

   }
   arr[i]=-1;
   i=0;
}


}
cout<<count<<endl;


for(int i=0;i<3*count;i++){

    cout<<arr1[i]<<" ";
    c++;
    if(c==3){
        cout<<endl;
        c=0;
    }

}
}














