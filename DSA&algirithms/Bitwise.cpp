#include <bits/stdc++.h>
using namespace std;
int main(){
   int x,a,b;
   cin>>x;
   int bina[7],binb[7];
   for(int i=0;i<7;i++){
   bina[i]=0;
   binb[i]=0;
    }
   for(int i=0;i<x;i++){
    a=i;
    b=i+1;
    int k = 0;
    while (a > 0) {
        bina[k] = a % 2;
        a = a / 2;
        k++;
    }
    int j = 0;
    while (b > 0) {
        binb[j] = b % 2;
        b = b / 2;
        j++;
    }

    for(int i=0;i<7;i++){

    }
   }

}
