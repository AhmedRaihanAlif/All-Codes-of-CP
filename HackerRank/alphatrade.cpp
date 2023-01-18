#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
string customers[n];


for(int i=0;i<n;i++){
 cin>>customers[i];
}
 for(int i=0;i<n;i++){
for(int j=0;j<n;j++){

    if(customers[i]==customers[j]){
        count++;
    }



}
cout<<count<<customers[i]<<endl;

//int x= (count/n)*100;
//cout<<customers[i]<<" "<<x<<endl;
}






}
