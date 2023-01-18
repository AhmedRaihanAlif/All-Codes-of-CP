#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x,y;
    int a=0,b=0;
    cin>>x>>y;
    char arr[10000];
    cin>>arr;
    if(x>0&&y>0){
       for(int i=0;i<15;i++){
        if(arr[i]=='R'){
           a=a+1;
           cout<<a<<endl;
        }
        if(arr[i]=='U'){
           b=b+1;
           cout<<b<<endl;
        }

       }
       if(a==x&&b==y)
        {
            cout<<"YES";
       break;
       }
       else{
        cout<<"NO";
        break;
       }


    }
    else if(x<0&&y<0){
     for(int i=0;i<sizeof(arr);i++){
        if(arr[i]=='L'){
           a=a-1;
        }
        if(arr[i]=='D'){
           b=b-1;
        }
       }
       if(a==x&&b==y){cout<<"YES";break;}
       else{
        cout<<"NO";
        break;
       }
    }
    else if(x>0&&y<0){
        for(int i=0;i<sizeof(arr);i++){
        if(arr[i]=='R'){
           a=a+1;
        }
        if(arr[i]=='D'){
           b=b-1;
        }
       }
       if(a==x&&b==y){cout<<"YES";break;}
       else{
        cout<<"NO";break;
       }
    }
    else{
        for(int i=0;i<6;i++){
        if(arr[i]=='L'){
           a=a-1;
        }
        if(arr[i]=='U'){
           b=b+1;
        }
       }
       if(a==x&&b==y){cout<<"YES";break;}
       else{
        cout<<"NO";break;
       }
    }
}
}
