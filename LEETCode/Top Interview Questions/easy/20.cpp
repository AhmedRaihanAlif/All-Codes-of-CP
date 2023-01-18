#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int c=0,f=0;
if(s.size()%2!=0){
    cout<<"false";
}
else{
int d =s.size()/2;
while(f!=d){
    for(int i=0;i<s.size();i++){


        if(s[i]==40 && s[i+1]==41){
            s[i]=0;
            s[i+1]=0;

            c++;
        }
       else  if(s[i]==123 && s[i+1]==125){
              s[i]=0;
            s[i+1]=0;

            c++;

        }
       else  if(s[i]==91 && s[i+1]==93){
            s[i]=0;
            s[i+1]=0;

            c++;
        }

    }
     f++;
}
}

if(d==c){
    cout<<"true";
}
else{
    cout<<"false";

}
}
