#include <bits/stdc++.h>
using namespace std;
    int distinct(int a){
        int count=0;
        int arr[4];
        int arra[10];
    for(int i=3;i>=0;i--){
    arr[i]=a%10;
    a=a/10;
    }
    for(int i=0;i<10;i++){
      arra[i]=0;
}
for(int i=0;i<4;i++){
   int j=arr[i];
   if(arra[j]==0){
      arra[j]=1;
}
   else {
    count++;
   }
}
    if(count>0){

       return 1;
    }
    else{
        return 0;
    }
    }
int main(){
   int num;
   cin>>num;
   for(int x=num+1;x<90000;x++){
    int result=distinct(x);
    if(result==1){
        continue;
}
    else{
        cout<<x;
        break;
    }
    }

}



