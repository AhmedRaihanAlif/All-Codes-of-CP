#include <bits/stdc++.h>
using namespace std;
int main(){
   int c;
   cin>>c;
   string dic[c];

   for(int i=0;i<c;i++){
    cin>>dic[i];
   }

   for(int i=0;i<c;i++){
    for(int j=0;j<5;j++){
        cout<<dic[i][j]<<" ";
    }
    cout<<endl;
   }

}
