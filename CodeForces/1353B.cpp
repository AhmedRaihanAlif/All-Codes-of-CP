#include<bits/stdc++.h>
using namespace std;
int main(){
int x,n,k,sum1=0,sum2=0,sum3=0;
cin>>x;
for(int i=0;i<x;i++){
    cin>>n>>k;
    int arr1[n],arr2[n];
    for(int j=0;j<n;j++){
        cin>>arr1[j];
       sum1+=arr1[j];
     }
     for(int l=0;l<n;l++){
        cin>>arr2[l];
       sum2+=arr2[l];
     }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);


    if(k!=0){
            int q=0;
            int w=n-1;
            for(int y=0;y<k;y++){

        if(arr1[q]<arr2[w])
{

        arr1[q]=arr2[w];
        q++;
        w--;
  }
  else{
    q++;
        w--;
  }

  }
    for(int u=0;u<n;u++){
       sum3+=arr1[u];
     }
    cout<<sum3<<endl;
    sum3=0;
    sum1=0;
    sum2=0;

    }
    else{
        cout<<sum1<<endl;
        sum1=0;
        sum2=0;
        sum3=0;
    }


}
}
