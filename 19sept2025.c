/*#include<stdio.h>
int main()
{
  int array[100];
  int i,n,x,pos;
  printf("\n Enter the size of an array ");
  scanf("%d",&n);
  printf("\n Enter the Elements ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("\n Input array elements are: ");
  for(i=0;i<n;i++)
  {
    printf("\n %d",array[i]);
  }
}*/
/*#include<stdio.h>
int main()
{
  int a[100],element,i,loc,size,n=0,j=0;
  printf("\n Enter size of an array ");
  scanf("%d",&size);
  printf("\n Enter %d array elements",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n Enter an element to insert ");
  scanf("%d",&element);
  printf("\n enter the position of %d element ",element);
  scanf("%d",&loc);
  loc=loc-1;
  size=size+1;
  for(i=size;i>=loc;i--)
  {
    a[i+1]=a[i];
  }
  a[loc]=element;
  printf("\n list after insertion ");
  for(i=0;i<size;i++)
  {
    printf("\n %d",a[i]);
  }
}*/
