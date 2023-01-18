#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    int h=1;
    int k=h;
   while(k==x){
        k=(k*10)+1;
        if(k<10000){
        cout<<k;
        }
        else{h++;}

}



}
}
