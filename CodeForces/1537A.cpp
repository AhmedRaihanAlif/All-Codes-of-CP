#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
for (int i=0;i<x;i++){
    int a,c=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        c+=arr[i];
    }

    for(int i=0;i<a;i++){
        if(c==a){
            cout<<0<<endl;
            break;
        }
        else{
                if(c>=0){
          int f =c-a;
          cout<<f<<endl;
          break;
                }
                else{
                    int f = -(c)-a;
                    cout<<f<<endl;
                    break;
                }
        }
    }
}
}
