#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
   string s;
   cin>>s;

    if(s[0]==89||s[0]==121){
      if(s[1]==69||s[1]==101){
         if(s[2]==83||s[2]==115){
        cout<<"YES"<<endl;
    }
     else{
    cout<<"NO"<<endl;
        }
    }
     else{
    cout<<"NO"<<endl;
        }
    }
    else{
    cout<<"NO"<<endl;
        }



}



}
