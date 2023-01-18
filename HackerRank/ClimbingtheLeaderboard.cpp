#include <bits/stdc++.h>
using namespace std;
#define max 200000
int arr[max],ar[max],arr1[max];
int main(){

    int x,y;
    cin>>x;
    for( int i=0;i<x;i++){
        cin>>arr[i];
        }
    cin>>y;

    for(  int i=0;i<y;i++){
        cin>>arr1[i];
    }

 int count=1;


 for(  int i=0;i<x;i++){
        if(i==x-1){
            break;
        }

        else if(arr[i]==arr[i+1]){

          ar[i+1]=count;
        }

        else if(arr[i]!=arr[i+1]){
                count++;
                ar[i+1]=count;
            }
    }

    ar[0]=1;

    int result[y];

    for(  int j=0;j<y;j++){
        for( int k=x-1;k>=0;k--){

            if(arr1[j]<arr[k]){
            result[j]=  ar[k]+1;
            break;
            }
            else if(arr1[j]>arr[k]){
                if(k==0){
                    if(arr1[j]>arr[k]){
                        result[j]=ar[k];
                    }
                }
            }
            else if(arr1[j]==arr[k]){
                result[j]=ar[k];
            }
        }
          cout<<result[j]<<endl;
    }


}
