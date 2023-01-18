#include<bits/stdc++.h>
using namespace std;
int main(){
int x,count=0;
cin>>x;
for(int i=0;i<x;i++){
    int y;
    cin>>y;
    int arr[y];
    for(int j=0;j<y;j++){
        cin>>arr[j];
        }
        sort(arr,arr+y);
         for(int k=0;k<y;k++){
                if(k==y-1){
                        count++;
                    break;
                }
      if(arr[k]==arr[k+1]){
            continue;
        }
        else{
                count++;
        }

        }

        cout<<count<<endl;

        count=0;

}

}
