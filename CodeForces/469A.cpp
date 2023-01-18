#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n)
{
    int res = 1;
  for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res++;
    }
    return res;
}


int main(){
int x,y,z;
cin>>x;
int array[1000];
cin>>y;
int arr1[y];
for(int i=0;i<y;i++){
    cin>>arr1[i];
    array[i]=arr1[i];

}
cin>>z;
int j =y;
int arr2[z];
for(int i=0;i<z;i++){
    cin>>arr2[i];

    array[j]=arr2[i];
    j++ ;
}

int k=z+y;
if(k!=0){
int o =countDistinct(array,k);


if(o==x){
        cout<<"I become the guy.";
}
else{
    cout<<"Oh, my keyboard!";
}
}
else{cout<<"Oh, my keyboard!";}

}

