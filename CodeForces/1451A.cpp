#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,c=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;

    for(int j=2;j<x;j++){
    if(x==1){
        cout<<c<<endl;

    }
  else  if(x==2){
        cout<<c+1<<endl;

    }
  else  if(x==3){
        cout<<c+2<<endl;

    }
    else{
         if(x/j==0){
            x=x/j;
            c++;
            cout<<c<<endl;
         }

    }

    }
   // cout<<c<<endl;

}


}
