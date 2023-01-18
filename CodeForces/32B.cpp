#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[200];
    char a[200];
    cin >> s;
    int n=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='.'){
            a[n]='0';
            n++;

        }
        else if(s[i]=='-'&&s[i+1]=='.'){
            a[n]='1';
            n++;
            i++;
        }
        else if (s[i]=='-'&&s[i+1]=='-'){
            a[n]='2';
            n++;
            i++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }



}
