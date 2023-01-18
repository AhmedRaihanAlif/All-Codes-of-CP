#include<stdio.h>
#include<stdlib.h>
int n;
int graph[50][50], completed[10];
int DepthFirstSearch(int i)
{
 int j;
 printf("\n%d", i);
 completed[i] = 1;
 for(j=0;j<n;j++)
 {
//first e dekhbo visit holo kina tarpor dekhbo direct connection ase kina
 if(!completed[j] && graph[i][j] == 1)
 {
 DepthFirstSearch(j);
 }
 }
 return 0;
}
int main()
{
 int i, j,x,y,z;
 scanf("%d%d",&x,&y);
 //graph e input nicchi
 int arr[y];
 for(i=0;i<y;i++)
 {
 for(j=0;j<y;j++)
 {
 scanf("%d",&graph[i][j]);
 }
 }
 //visited array er shurute sob gulake 0 dhore nisi
 for(i=0;i<n;i++)
 {
 completed[i]=0;
 }
 DepthFirstSearch(0);
 return 0;
}
