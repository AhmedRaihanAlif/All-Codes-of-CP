#include<bits/stdc++.h>
using namespace std;
int main(){
int x,j;
cin>>x;
for(int i=0;i<x;i++){
    char str[100];
    cin>>str;

   for( j=0;str[j]!='\0';j++){
        if(j==0||j%2==0||j=='\0'-1){
            cout<<str[j];

        }

    }
    cout<<str[j-1]<<endl;



}




}
