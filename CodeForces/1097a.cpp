#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
char arr[2];
for(int i=0;i<2;i++){
    cin>>arr[i];
}

char arr1[5][2];
for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
        cin>>arr1[i][j];
    }
}

for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
       if(arr1[i][j]==arr[0]||arr1[i][j]==arr[1]){
        count++;
       }
    }
}

if(count>0){
    cout<<"YES";
}
else{cout<<"NO";}

}
