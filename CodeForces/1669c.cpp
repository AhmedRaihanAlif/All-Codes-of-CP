#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    int arr[x];
    int odd[x];
    int even[x];
    int e=0;
    int o=0;
    int c=1;
    int d=1;
    for(int i=0;i<x;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            c++;
        }
        else{
            d++;
        }

    }

    for(int i=0;i<x;i++){
        if(i%2==0){
          even[i]=arr[i]+1;

        }
        else{
          even[i]=arr[i];
        }
    }
    for(int i=0;i<x;i++){
        if(i%2!=0){
          odd[i]=arr[i]+1;

        }
        else{
            odd[i]=arr[i];
        }
    }



    if(c==x||d==x){
        cout<<"Yes"<<endl;
    }
    else{

     for(int j=0;j<x;j++){
        if(odd[0]%2!=0){

        if(odd[j]%2!=0){
            o++;

        }

    }
    else{
         if(odd[j]%2==0){
            o++;

        }

    }
     }

    for(int j=0;j<x;j++){
        if(even[0]%2!=0){

        if(even[j]%2!=0){
            e++;

        }

    }
    else{
         if(even[j]%2==0){
            e++;

        }

    }
     }


    if( o==x || e==x ){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
}



}
