#include<stdio.h>
int main(){


char array[100];
int x,i,j;
fgets(array, sizeof(array), stdin);
scanf("%d",&x);
 for (i=0;array[i]!='\0';++i) {
        if(i==x){
        continue;
    }
    else{
        printf("%c",array[i]);
    }
}


   return 0;
}
