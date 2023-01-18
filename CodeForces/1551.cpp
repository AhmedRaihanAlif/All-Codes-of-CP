#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
    cin>>n;
    int ans[n][2];
    for(int i=0;i<n;i++){
         int x;
        cin>>x;
     int h=round(x/3.0);
     int s = h*2.0;
     int g =x-s;
     ans[i][0]=g;
    ans[i][1]=h;
     }
      for(int i=0;i<n;i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
      }
}

