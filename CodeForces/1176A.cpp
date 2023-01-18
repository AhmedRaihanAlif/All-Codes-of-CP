#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

for(int i=0;i<n;i++){

  long long int x,c=0;
    cin>>x;
    if(x==1){
        cout<<0<<endl;
    }
    else{
            while(x!=1){
      if(x%2==0){
        x=x/2;
        c++;
      }
      else if(x%3==0){
        x=(2*x)/3;
        c++;
      }
      else if(x%5==0){
        x=(4*x)/5;
        c++;
      }
      else if(x%2!=0||x%3!=0||x%5!=0){
        c=-1;
        break;
      }
    }

    cout<<c<<endl;



    }

}


}
