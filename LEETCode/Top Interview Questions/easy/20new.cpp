#include<bits/stdc++.h>
using namespace std;
int main(){


string a;
cin>>a;
vector<string> s ;
for(int i=0;i<a.size();i++){

  s.push_back(a[i]);
}
for (auto i = s.begin(); i != s.end(); ++i){
  if(*i==40 && *i+1==41){
    s.erase(*i);
    s.erase(*i+1);
  }
}
 for (auto i = s.begin(); i != s.end(); ++i)
        cout << *i << " ";

}
