#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str[] = {"flower","flow","flight"};
    int c = sizeof(str)/sizeof(str[0]);
    string str2[30];
int d=0;
int e=0;
for(int i=0;i<c;i++){
    if(str[0][i]==str[1][i] && str[1][i]==str[2][i] ){
    str2[d]=str[0][i];
    d++;
    }
}
   string s = "";
    for (int i = 0; i < 3; i++) {
        s = s + str2[i];
    }
    cout<<s;




}



