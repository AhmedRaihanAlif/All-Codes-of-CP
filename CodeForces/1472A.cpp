#include<bits/stdc++.h>
using namespace std;
int main(){
int a,x,y,z,c=1;
cin>>a;
for(int i=0;i<a;i++){
    cin>>x>>y>>z;
    if(z==1){
        cout<<"YES"<<endl;
    }
    else{
   while(x%2==0||y%2==0){

    if(x%2==0){
      x=x/2;
      c*=2;

    }
    if(y%2==0){
        y=y/2;
        c*=2;

    }
   }
   if(c>=z){

    cout<<"YES"<<endl;
   }
   else{

    cout<<"No"<<endl;
   }
   c=1;



    }




}

}

