#include <stdio.h>
int main()
{
int i, l, h, m, n, key, a[100];

scanf("%d",&n);

for(i = 0; i < n; i++)
scanf("%d",&a[i]);
scanf("%d", &key);
l = 0;
h = n - 1;
m = (l+h)/2;
while (l <= h) {
if(a[m] < key)
l = m + 1;
else if (a[m] == key) {
printf("1");
break;
}
else
h = m - 1;
m = (l + h)/2;
}
if(l > h)
printf("0");
return 0;
}
