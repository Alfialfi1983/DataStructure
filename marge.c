#include<stdio.h>
int a[10],b[10],c[20],n,m,i,j,k=0;
void main()
{
printf("enter the first array size\n");
scanf("%d",&m);
printf("enter the second array size\n");
scanf("%d",&n);
printf("enter the first array elements\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the second array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
}
printf("the merged array elements is\n");
for(i=0;i<m+n;i++)
{
printf("%d\n",c[i]);
}
}




