#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
        int c=0,v=0;
    char arr[10000];
    cin>>arr;
for(int j=0;j<sizeof(arr);j++){
    if(arr[j]==0){
        c++;


    }
    else{
        v++;

    }
}
if(v==c){
    cout<<"0"<<endl;
}
else if(v<c){
    cout<<v<<endl;
}
else{
    cout<<c<<endl;
}

}

}
