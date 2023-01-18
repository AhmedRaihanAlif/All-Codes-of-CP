#include <bits/stdc++.h>
using namespace std;
    int main(){
    string s1,s2,s3,s4,s5;
    int sum=0,n;
    cin>>n;
    s1="Tetrahedron";
    s2="Cube";
    s3="Octahedron";
    s4="Dodecahedron";
    s5="Icosahedron";


    string arra[n];
    for(int i=0;i<n;i++){
       cin>>arra[i];
    }
     for(int i=0;i<n;i++){
      if(arra[i]==s1){
        sum =sum +4;
      }
       if(arra[i]==s2){
        sum =sum +6;
      }
       if(arra[i]==s3){
        sum =sum +8;
      }
       if(arra[i]==s4){
        sum =sum +12;
      }
       if(arra[i]==s5){
        sum =sum +20;
      }


    }
    cout<<sum;

    }
