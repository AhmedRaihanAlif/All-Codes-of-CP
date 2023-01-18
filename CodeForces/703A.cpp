#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,count1=0,count2=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a>b){
      count1++;
    }
    else if(a<b){
        count2++;
    }
    else{
        continue;
    }



}
if(count1>count2){
    cout<<"Mishka";
}
else if(count1<count2){
    cout<<"Chris";
}
else{
    cout<<"Friendship is magic!^^";
}


}
