#include<bits/stdc++.h>
using namespace std;
int main(){
    char array1[100];
    char array2[100];
    cin>>array1;
    int c=0;
int size=strlen(array1);

for(int i=0;i<size;i++){
    if(array1[i]==array1[i+1]){
        i++;
    }
    else{
        array2[c]=array1[i];
        c++;

    }
}
int size2=strlen(array2);
for(int i=0;i<size2;i++){
    if(array2[i]==array2[i+1]){
       array2[i]='\0';
       array2[i+1]='\0';
       c-=2;
    }

}



if(c!=0){
for(int i=0;i<size2;i++){
    cout<<array2[i];
}
}
else{
    cout<<"Empty String"<<endl;
}


}



