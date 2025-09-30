/*#include<stdio.h>
int main()
{
  int a[100],element,i,loc,size;
  printf("\n Enter size of an array ");
  scanf("%d",&size);
  printf("\n Enter %d array elements ",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n list before deletion: ");
  for(i=0;i<size;i++)
  {
    printf("%d",a[i]);
  }
  printf("\n Enter an element to delete ");
  scanf("%d",&element);
  printf("\n Enter the position of %d element",element);
  scanf("%d",&loc);
  loc=loc-1;
  size=size-1;
  for(i=size;i>=loc;i--)
  {
    a[i+1] = a[i];
  }
  a[loc] = element;
  printf("\n List after deletion: ");
  for(i=0;i<size;i++)
  {
    printf("\n %d",a[i]);
  }
}*/
