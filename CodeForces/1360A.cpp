#include<bits/stdc++.h>
using namespace std;

int isPerfectSquare(int n)
{
    for (int i = 1; i * i <= n; i++) {


        if ((n % i == 0) && (n / i == i)) {
            return 1;
        }
    }
    return -1;
}

int main(){
int x;
cin>>x;
for(int i=0;i<x;i++){
    int a,b;
    cin>>a>>b;
  int z = (a*b)*2;
    for(int j=z;j<100000;j++){
int k = isPerfectSquare(j);
if(k==1){
    cout<<j<<endl;
    break;
}

    }
}

}


