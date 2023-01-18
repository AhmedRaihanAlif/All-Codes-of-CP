#include <bits/stdc++.h>
using namespace std;
int main(){
    string arr1;
    string arr2;
    string arr3;
   cin>>arr1>>arr2>>arr3;
  string cat = arr1+arr2;

sort(arr3.begin(),arr3.end());
sort(cat.begin(),cat.end());
 if(arr3==cat){
    cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
