#include<stdio.h>
int main(){
int n,i,k;
printf("How Many Digits : \n ");
scanf("%d",&n);
int arr[n];
printf("Enter The Digits : \n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the elements you want to delete :\n");
scanf("%d",&k);
for(i=0;i<n;i++){
    if(arr[i]==k){
        continue;
    }
    else{
        printf("%d ",arr[i]);
    }
}


}
