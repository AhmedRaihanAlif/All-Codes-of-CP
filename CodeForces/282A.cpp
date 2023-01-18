#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,countplus=0,countminus=0;
    string s1;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>s1;
        if(s1[1]=='+'){
    countplus++;
}
else if(s1[1]=='-'){
    countminus++;
}
    }

int c = countplus-countminus;
cout<<c;

}
