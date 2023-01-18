#include <bits/stdc++.h>

using namespace std;
int main(){

int c ;
cin>>c;
string arr[c];
/*for(int i=0;i<c;i++){
    cin>>arr[i];
}*/
for(int i=0;i<c;i++){
    cin>>arr[i];
    int l=sizeof(arr[i]);
     for (int k = 0; k < l-1; k++) {
      for ( int j = k+1; j < l; j++) {
         if (arr[i][k] > arr[i][j]) {
            char temp = arr[i][k];
            arr[i][k] = arr[i][j];
            arr[i][j] = temp;
         }
      }
   }



}
for(int i=0;i<c;i++){
    cout<<arr[i];
}




}
