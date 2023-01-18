#include<bits/stdc++.h>
using namespace std;
int main(){
char arr[1000];
cin>>arr;
int l=strlen(arr);
if(arr[0]>='a'  && arr[0]<='z'){
  arr[0]=arr[0]-32;

}
for(int i=0;i<l;i++){
    cout<<arr[i];
}

}
