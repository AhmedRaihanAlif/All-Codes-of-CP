#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
char arr1[n],arr2[n];
for(int i=0;i<n;i++){
    cin>>arr1[i];

}
for(int j=0;j<n;j++){
    cin>>arr2[j];
}
for(int k=0;k<n;k++){
    int p =arr1[k] - arr2[k];
    p=abs(p);
    if(p==1){
       sum+=1;

       }
     else if(p==2){
       sum+=2;

    }
     else if(p==3){
       sum+=3;

    }
    else if(p==4){
       sum+=4;

    }
   else  if(p==5){
       sum+=5;

    }
   else  if(p==6){
       sum+=4;
       }

   else  if(p==7){
       sum+=3;
    }
   else  if(p==8){
       sum+=2;
    }
   else  if(p==9){
       sum+=1;

    }


}
cout<< sum;



}
