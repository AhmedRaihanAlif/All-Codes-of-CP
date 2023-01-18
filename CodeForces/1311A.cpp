#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,a,b;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>a>>b;
        if(a<b){
               int k = a-b;

                    if(abs(k)%2!=0){
                        cout<<"1"<<endl;
                    }
                    else{
                        cout<<"2"<<endl;
                    }


        }
        else if(a>b){
            int k=a-b;
            if(k%2==0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
        else{
            cout<<"0"<<endl;
        }

    }
}
