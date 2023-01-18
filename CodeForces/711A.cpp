#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0;
cin>>n;
char arr[n][5];
for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
    }

}
for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
           if(j!=4){
             if(arr[i][j]=='O'&&arr[i][j+1]=='O'){
            arr[i][j]='+';
            arr[i][j+1]='+';
           j=6;
           i=1002;
           c++;
        }
            }


    }

}
if(c==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<5;j++){
        cout<<arr[i][j];
    }
cout<<endl;
}
}


}
