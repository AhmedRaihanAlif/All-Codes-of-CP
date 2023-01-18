#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int arr[x];
int a,b,i;
for(i=0;i<x;i++){
    cin>>a>>b;
    if(a==b){
        arr[i]=0;
    }
    else{
        int h= abs(b-a);

        if(h%10==0){
                int k=h/10;
            arr[i]=k;
        }
        else{
            int k= (h/10)+1;
            arr[i]=k;
                    }
    }
}
for(i=0;i<x;i++){
    cout<<arr[i]<<endl;
}

}
