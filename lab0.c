#include<stdio.h>
#include<stdlib.h>

void main()
{
 int a[100],b[100],i,n,t,ele,j;
 printf("enter number of test cases\n");
 scanf("%d",&t);
 for(j=0;j<t;j++)
 {
 printf("Enter the size of the array and element to be found\n");
 scanf("%d%d",&n,&ele);
 printf("enter the array elements in ascending order\n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]==ele)
  {
  b[j]=1;
  break;
  }
  
 }
 if(i==n)
 b[j]=-1;
 }
 for(j=0;j<t;j++)
 {
  printf("%d\n",b[j]);
  }
}
