#include <bits/stdc++.h>
using namespace std;
int main(){
    char  s1[100];
    char  s2[100];
    cin>>s1;
    cin>>s2;
    int l=strlen(s1);
    int k=strlen(s2);
    for(int i=0;i<l;i++){
        if(s1[i]>=65&&s1[i]<=90){
            s1[i]=s1[i]+32;
        }
    }
    for(int i=0;i<l;i++){
        if(s2[i]>=65&&s2[i]<=90){
            s2[i]=s2[i]+32;
        }
    }

 int result = strcmp(s1,s2);
if(result==0){
    cout<<"0";
}
else if(result>0){
    cout<<"1";
}
else{
    cout<<"-1";
}


}
