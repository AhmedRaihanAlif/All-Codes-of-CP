#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int y=0,k;
    cin>>x;
    if(x<=5){
        cout<<"1";
    }
    else{

            while(x>5){
                 x=x-5;
    y++;
            }
            k=y+1;
        cout<<k;
    }


}
