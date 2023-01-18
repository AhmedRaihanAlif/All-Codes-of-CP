#include <bits/stdc++.h>
using namespace std;
int main(){
string  arr1[100];
string   arr2[100];
cin>>arr1;
int length = sizeof(arr1);
for(int i=0;i<length;i++){
    if(arr1[i]=='+'){
        continue;
    }
    else{

       arr2[i]=arr1[i];

    }


}
int length2=sizeof(arr2);
for(int i=0;i<length2;i++){
    cout<<arr2[i]<<" "<<i<<endl;
}


}
