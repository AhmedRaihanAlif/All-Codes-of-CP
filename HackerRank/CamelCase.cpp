#include<bits/stdc++.h>
using namespace std;
int main(){

char arr[100000];
cin>>arr;
int c=0;

for(int i=0;i<strlen(arr);i++){
    if(arr[i]>=65&& arr[i]<=90){
        c++;
    }
}
cout<<c+1;

}
