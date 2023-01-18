
#include <stdio.h>
#include <string.h>

struct Student {
   char  name[50];
   int   id;
 int marks[5];
};

int main( ) {
int i,k,h;
int maximum;

   struct Student students[10];
     for(i=0;i<10;i++){

scanf("%s",&students[i].name);

scanf("%d",&students[i].marks);
}
for(i=0;i<10;i++){
printf("%s, %d",students[i].name,students[i].marks);
}
   maximum = 0;

for(i=0;i<10;i++){

   if (students[i].marks > maximum)
        {
        maximum  = students[i].marks;}
}
printf("%f",maximum);

   return 0;
}
