#include <bits/stdc++.h>
using namespace std;
int main(){
int x[4];
int arra[10];
int count=0;
for(int i=0;i<4;i++){
     cin>>x[i];
}
for(int i=0;i<10;i++){
  arra[i]=0;
}

for(int i=0;i<4;i++){

    int j=x[i];
   if(arra[j]==0){
    arra[j]=1;


   }
   else {
    count++;

   }

}

if(count>0){
    cout<<"no distinc";

}
else{
        cout<<"distinct";
}


}
