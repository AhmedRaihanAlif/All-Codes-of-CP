#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;


    for(int i=0;i<n;i++){
   long long  int m1 = INT_MAX;
  long long   int m2 = INT_MAX;
       int x;
       long long int count=0;
       cin>>x;
     long long   int arr1[x],arr2[x];
       for(long long int j=0;j<x;j++){
        cin>>arr1[j];
        m1 = min(m1, arr1[j]);

        }
       for(long long int l=0;l<x;l++){
        cin>>arr2[l];
         m2 = min(m2, arr2[l]);

        }


        for(long long int a=0;a<x;a++){

            if(arr1[a]==m1&&arr2[a]==m2){

            }
            else{
                while (arr1[a]!= m1 || arr2[a]!=m2){


                  if(arr1[a]!=m1 && arr2[a]!=m2){
                   int d= arr1[a]-1;
                    arr1[a]=d;

                   int c= arr2[a]-1;
                    arr2[a]=c;
                    count++;


                }
                else if(arr1[a]!=m1 && arr2[a]==m2){
                  int c= arr1[a]-1;
                    arr1[a]=c;
                    count++;

                }
              else  if(arr1[a]==m1 && arr2[a]!=m2){
                    int c = arr2[a];

                    arr2[a]=c-1;
                    count++;

                }

                }




    }
        }
          cout<<count<<endl;



    }
}
