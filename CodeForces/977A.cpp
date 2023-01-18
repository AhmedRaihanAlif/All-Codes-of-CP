#include<bits/stdc++.h>
using namespace std;
int main(){
int u,j=0,y;
cin>>u>>y;
while(j!=y){

if(u%10>0){
    u=u-1;
}
else{
    u=u/10;
}
j++;
}

cout<<u;


}
