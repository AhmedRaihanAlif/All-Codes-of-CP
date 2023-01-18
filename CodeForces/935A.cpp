#include<bits/stdc++.h>
using namespace std;
int main(){
int x,counts=0;
cin>>x;
for(int i=1;i<x;i++){
    if(x%i==0){
        counts++;
    }
}
cout<<counts;


}
