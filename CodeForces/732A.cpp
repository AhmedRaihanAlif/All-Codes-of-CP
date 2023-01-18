#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a;
cin>>b;
for(int i=1;i<10;i++){
    if ((a*i)%10 == b){
        cout<<i;
        break;
    }
    else if((a*i)%10 == 0){
        cout<<i;
        break;
            }
}
}
