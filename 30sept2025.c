/*#include<stdio.h>
int main()
{
  int arr1[50],arr2[50],size1,size2,i,k,merge[100];
  printf("\n Enter Array 1 size ");
  scanf("%d",&size1);
  printf("\n Enter Array 1 elements ");
  for(i=0;i<size1;i++)
  {
    scanf("%d",&arr1[i]);
    merge[i]=arr1[i];
  }
  k=1;
  printf("\n Enter Array 2 size ");
  scanf("%d",&size2);
  printf("\n Enter Array 2 elements ");
  for(i=0;i<size2;i++)
  {
    scanf("%d",&arr2[i]);
    merge[k]=arr2[i];
    k++;
  }
  printf("\n The new array will be form: ");
  for(i=0;i<k;i++)
  {
    printf("\n %d",merge[i]);
  }
}*/
// Descending order 
/*#include<stdio.h>
int main()
{
  int arr[50],i,j,n,temp;
  printf("\n Enter total no. of elements to store: ");
  scanf("%d",&n);
  printf("\n Enter %d elements: ",n);
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  printf("\n Array elements is ascending order: ");
  for(i=0;i<n;i++)
  {
    printf("\n %d",arr[i]);
  }
}*/
