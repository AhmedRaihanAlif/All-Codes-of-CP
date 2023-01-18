#include<bits/stdc++.h>
using namespace std;
int main(){

int x,c=0;
cin>>x;
while(x!=0){
   long long int a,b,n;
    cin>>a>>b>>n;
   long  long int s=0;
    while(s<=n){
        if(a>b){
            b+=a;
            s=b;

            c++;


        }
        else if(b>a){
            a+=b;
            s=a;
            c++;


        }
        if(s>n){
            break;
        }



    }
    cout<<c<<endl;
    x--;
    c=0;



}



}
