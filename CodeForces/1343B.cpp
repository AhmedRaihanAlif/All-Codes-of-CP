#include<bits/stdc++.h>
using namespace std;
int main(){
int j,x,sum=0,sum1=0,count=0,count1=0;
cin>>x;
int arr[x],arr1[100],arr2[100];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<x;i++){
        int l=arr[i];
int k=arr[i]/2;
if(k%2!=0){
    cout<<"NO"<<endl;
}
else{
        cout<<"YES"<<endl;
    for( j=1;j<l;j++){
            if(j%2==0){

             cout<<j;
             count++;

             sum+=j;

            }
            }


            for(int u=j+1;u<sum;u++){
                    if(count1!=(l/2)-1){
                if(u%2!=0){
                    sum1+=u;
                    count1++;
                    cout<<u;

                }
                    }
                    else{
                           for(int g=u;g<sum;g++){
                                if(g%2!=0){
                            if((sum1+g)==sum){
                                cout<<g<<endl;
                                break;
                            }
                           }

                           }

                    }
            }



}


}
}
