#include <bits/stdc++.h>
using namespace std;
int main(){
string s1[100],s2[100];
cin>>s1;
cin>>s2;
int x;
int count=0;
int l=sizeof(s1);
int k=sizeof(s2);

for(int i=0;i<l;i++){
    if(s1[i]>=65 && s1[i]<=90){
        s1[i]='a'+s1[i]-'A';
    }
}

for(int i=0;i<l;i++){
    if(s2[i]>=65 && s2[i]<=90){
        s2[i]='a'+s2[i]-'A';
    }
}
x=strcasecmp(s1,s2);
    if(x>0) printf("1\n");
    else if(x<0) printf("-1\n");
    else printf("0\n");

