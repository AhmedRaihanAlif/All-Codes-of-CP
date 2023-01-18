#include<bits/stdc++.h>
using namespace std;
int main(){
int num[] = {3,2,3};
int target=6;
int c =sizeof(num)/sizeof(num[0]);
if(c==1){
        cout<<"0";
    }
  else{
    for(int i=0;i<c;i++){
        for(int j=i+1;j<c;j++){
            if(num[i]+num[j]==target){
                cout<<i<<" "<<j;
                break;
            }
        }
    }
  }

}










