#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[30],i,n,key;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key element to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Key element is found in location:%d\n",i);
exit(0);
}
}
printf("key element is not found\n");
}
