#include<bits/stdc++.h>
using namespace std;
int main(){
int n,column=0,row=0,i,j,k,l,m,count=0,count1=0,count2=0;
cin>>n;


int arr[n][n];
int arrc[n],arrr[n];
for(int i=0;i<n;i++ ){
    if(n==0){
        break;
    }
    else{
    for(int j=0;j<n;j++){

        cin>>arr[i][j];
    }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       column+=arr[i][j];

    }
    arrc[i]=column;
    column=0;

}
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
       row+=arr[i][j];
    }
    arrr[j]=row;
    row=0;

}
for(int i=0;i<n;i++){
   if(arrr[i]%2==0&&arrc[i]%2==0){
    count++;
   }
   if(arrr[i]%2!=0){
        count1++;
        l=i;

   }
     if(arrc[i]%2!=0){
         count2++;
         m=i;

   }
}
if(count==n){
    cout<<"OK";
}
if (count1>1){
    cout<<"Corrupt";

}
else{
cout<<"Change bit : "<<m+1<<",";
}
if(count2>1){
    cout<<"Corrupt";

}
else{
    cout<<l+1;
}
}

