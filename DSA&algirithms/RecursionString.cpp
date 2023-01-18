#include<bits/stdc++.h>
using namespace std;

void palindromeString(char arr[],int p,int r){
   if(p>=r){
    cout<<"true";
   }
   else if(arr[p]!=arr[r])
    cout<<"False";

   else{palindromeString(arr,p+1,r-1);}
}

int main(){
char str[100];
cin>>str;
int h=strlen(str);
 char arr[h];
for(int i=0;i<h;i++){
    arr[i]=str[i];
    }

palindromeString(arr,0,h-1);



}
