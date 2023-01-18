#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    int k= x*y;
    if(k==1){
        cout<<"1"<<endl;
    }
    else{
            if(k%2==0){
               int g = k/2;
               cout<<g<<endl;
            }
            else{
    int  g = k/2;
        cout<<g+1<<endl;
            }
    }

}

}
