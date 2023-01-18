#include<bits/stdc++.h>
using namespace std;
int main(){

int n,c=0;
cin>>n;
char arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if (arr[i]=='x'&&arr[i+1]=='x'&&arr[i+2]=='x'){
        c++;
    }
}
cout<<c;

}
