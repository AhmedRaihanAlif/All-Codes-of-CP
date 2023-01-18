#include <bits/stdc++.h>
using namespace std;
int main(){
int x,j,l=0;
scanf("%d",&x);
for( int i=1;i<=x;i++){
   j=pow(-1,i)*i;
   l=l+j;
}
printf("%d",l);
}
