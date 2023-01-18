#include<stdio.h>
int main(){
int n,i;
printf("How Many Digits : \n");
scanf("%d",&n);
int arr[n];
printf("Enter The Digits : \n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
}
