#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int coun=0;
while(x<=y){
        x=x*3;
        y=y*2;
        coun++;
}
cout<<coun;
}
