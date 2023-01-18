#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int k=0;k<n;k++){
    int a,b,s=0;
    int u=0;
    int e=0;
    int t;
    cin>>a>>b;
    int h=a*b;
    char arr[h];
    int arr2[h+3];

    for(int i=0;i<h;i++){
        cin>>arr[i];
    }
for(int i=0;i<h-b;i+=b)
    {
        for(int j=i+b;j<h;j+=b){
           t=0;
           int d=i;
           int g=j;
          // cout<<d<<endl<<g<<endl;
           if(g<h){

        while(s!=b){
            if(arr[d]==arr[g]){
                t+=0;d++;g++;s++;

}
            else
            {
               int w=int(arr[d]);
               int q=int(arr[g]);
               int m=abs(w-q);
       // cout<<w<<endl<<q<<endl<<m<<endl;
               t+=m;d++;g++;s++;
}
}
        e++;
        //cout<<"T:"<<t<<endl;
        //cout<<"E:"<<e<<endl;
        arr2[u]=t;
        u++;
        cout<<endl;
        s=0;
           }
 }
}
if(a==2){
    cout<<t<<endl;
   }
   else{
int mins = arr2[0];
for(int i = 0; i<e; i++){
          if(arr2[i] < mins){
            mins = arr2[i];
        }
    }
    cout<<mins<<endl;

}
}
}





