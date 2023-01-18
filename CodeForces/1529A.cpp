#include<bits/stdc++.h>
using namespace std;
int Distinct(int arr[], int n)
{
int s=0,c=0;

    for (int i=0; i<n; i++)
    {

        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;


        if (i == j)
{
    s+=arr[i];
    c++;
}

    }
    cout<<s<<c;
    return s;
}
int main(){
int n,c=0,x,s=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    int arr[x];
    for(int j=0;j<x;j++){
        cin>>arr[j];

    }



}
}
