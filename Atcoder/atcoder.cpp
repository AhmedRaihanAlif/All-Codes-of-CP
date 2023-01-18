#include<bits/stdc++.h>
using namespace std;
int main(){
int k,m,n;
cin>>n>>k>>m;
int x[n-1];
int sum=0;
for(int i=0;i<n-1;i++){
    cin>>x[i];
    sum=sum+x[i];
}
int z=n*m-sum;
if(z>k){
        cout<<"-1";
}
 else if(z<0)
    {cout<<"0";
 }
else{
        cout<<z;
}

}
