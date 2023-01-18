#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
for(int i=0;i<n;i++){
        int x,g=0;
        cin>>x;
        for(int j=1;j<x;j++){
            if(x%j==0){
                    g=j+g;
                count+=g;
            }
        }
        cout<<g<<endl;

}



}
