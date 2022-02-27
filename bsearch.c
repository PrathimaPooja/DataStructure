#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[30],mid,high,low,n,key,i;
printf("Enter the limits:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the search element:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
printf("Element found in location:%d\n",mid);
exit(0);
}
else if(key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}
}
printf("key element is not found\n");
}

