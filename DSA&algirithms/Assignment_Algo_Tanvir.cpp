#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

 string arr[n][3];
 int c=-1;
  string w=0;
for(int i=0;i<n;i++){

        string s,a,b;

        cin>>s>>a>>b;
        arr[i][0]=s;
        arr[i][1]=a;
        arr[i][2]=b;
}
int r;
cin>>r;
int arr2[r];
for(int i=0;i<r;i++){
    cin>>arr2[i];
}


int f=0,p=0;
while(f!=n-1){
for(int i=0;i<n;i++){
    int q = stoi(arr[i][1]);
        if(q>c){
            c=q;
        }
    }
    for(int i=0;i<n;i++){
            int q = stoi(arr[i][1]);
        if(q==c && p<arr2[0]){
                cout<<"Taking  "<<arr[i][0]<<" :"<<arr[i][1]<<"kg"<<arr[i][2]<<"taka"<<endl;

            arr[i][1]=w;
        break;
        }

    }


f++;
}


cout<<c;











}
