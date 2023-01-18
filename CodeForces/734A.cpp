#include<bits/stdc++.h>
using namespace std;
int main(){
int x,coun1=0,coun2=0;
cin>>x;
char str[x];
cin>>str;
for(int i=0;i<x;i++){
    if(str[i]=='A'){
        coun1++;
    }
    else{
            coun2++;
    }
}
if(coun1>coun2){
    cout<<"Anton";

}
else if (coun1==coun2){
    cout<<"Friendship";
}
else{
    cout<<"Danik";
}

}
