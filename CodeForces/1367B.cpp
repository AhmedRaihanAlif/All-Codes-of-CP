#include<bits/stdc++.h>
using namespace std;
int main(){
int m;
cin>>m;
for(int i=0;i<m;i++){
      int n;
      cin>>n;
      int arr[n];
      int arr1[n];
      int arr2[n];
int c=0;

      for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=i%2;
        arr2[i]=arr[i]%2;

      }

if(n==1){
    if(arr1[0]==arr2[0]){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
else{
      if(std::equal(arr1, arr1 + n, arr2)){
        cout<<"0"<<endl;
      }
else{
    for(int i=0;i<n;i++){

      if(i%2==0 && arr2[i]==1) {
        for(int j=i+1;j<n;j++){
            if(j%2==1 && arr2[j]==0){
                int temp = arr2[i];
                 arr2[i] = arr2[j];
                  arr2[j] = temp;

                  c++;

                    j=n;
            }
        }

      }
     else   if(i%2==1 && arr2[i]==0) {
        for(int j=i+1;j<n;j++){
            if(j%2==0 && arr2[j]==1){
                int temp = arr2[i];
                 arr2[i] = arr2[j];
                  arr2[j] = temp;

                  c++;
                  j=n;

            }
        }

      }


    }
    cout<<c<<endl;

}



    }
}
}



