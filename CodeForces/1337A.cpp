#include<bits/stdc++.h>
using namespace std;
int main(){
int k,a,b,c,d,x,y,z;
cin>>k;
for(int i=0;i<k;i++){
    cin>>a>>b>>c>>d;
    if(a!=0 ){
        x=a;
        if(b!=0 ){
          y=b;
            if(c!=0 ){
             z=c;
            }
        }
        cout<<x<<" "<<y<<" "<<z;
        cout<<endl;
    }
    else{
         x=a++;
        if(b==0 ){
           y = b++;
            if(c==0){
                 z=c++;
            }

        }
       cout<<x<<" "<<y<<" "<<z;
       cout<<endl;
    }
}


}
