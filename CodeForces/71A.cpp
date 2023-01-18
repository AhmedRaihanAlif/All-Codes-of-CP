#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int k,l=0;
cin>>k;

string str[k];
for(int i=0;i<k;i++){
cin>>str[i];
}
for(int i=0;i<k;i++){
    if(str[i].size()<=10){
        cout<<str[i]<<endl;
    }
    else{
         cout<<str[i][0]<<str[i].size()-2<<str[i][str[i].size()-1]<<endl;
        }

    }
}




